function BuildSDK([string]$arg0, [string]$arg1, [string]$arg2) {
    Remove-Item sdk_build -Force -Recurse -ErrorAction SilentlyContinue
    New-Item sdk_build -ItemType Directory | Out-Null
    cmake -G $arg2 -A Win32 -B sdk_build $arg0 $arg1
    Write-Host 'Building sdk' -ForegroundColor Yellow
    cmake --build sdk_build
}

function InstallSDK {
    if (-Not(Test-Path -Path sdk_build)) {
        Write-Host 'Project has not been built, run ".\build.ps1 build" first' -ForegroundColor Yellow
        return
    }
    Write-Host 'Installing sdk, require Administrator privilege' -ForegroundColor Yellow
    cmake --build sdk_build --target install
}

if ($args[0] -eq "build") {
    BuildSDK $args[1] $args[2] $args[3]
}
elseif ($args[0] -eq "install") {
    InstallSDK
}
else {
    Write-Host 'Nothing to do' -ForegroundColor Yellow
}