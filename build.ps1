function BuildSDK([string]$arg0, [string]$arg1) {
    Remove-Item sdk_build -Force -Recurse -ErrorAction SilentlyContinue
    New-Item sdk_build -ItemType Directory | Out-Null
    Push-Location sdk_build
    cmake .. $arg0 $arg1
    Write-Host 'Building sdk'
    cmake --build .
    Pop-Location
}

function InstallSDK {
    if (-Not(Test-Path -Path sdk_build)) {
        Write-Host 'Project has not been built, run ".\build.ps1 build" first' -ForegroundColor Yellow
        return
    }
    Write-Host 'Installing sdk, require Administrator privilege' -ForegroundColor Yellow
    Push-Location sdk_build
    cmake --build . --target install
    Pop-Location
}

if ($args[0] -eq "build") {
    BuildSDK $args[1] $args[2]
}
elseif ($args[0] -eq "install") {
    InstallSDK
}
else {
    Write-Host 'Nothing to do' -ForegroundColor Yellow
}