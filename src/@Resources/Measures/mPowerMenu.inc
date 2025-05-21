[mLock]
Measure=Plugin
Plugin=RunCommand
Program=Powershell
Parameter="Add-Type -AssemblyName System.Windows.Forms; if ([System.Windows.Forms.MessageBox]::Show('Do you want to lock the PC?', 'Rainmeter - CCRS by @336conaN', [System.Windows.Forms.MessageBoxButtons]::YesNo, [System.Windows.Forms.MessageBoxIcon]::Question) -eq [System.Windows.Forms.DialogResult]::Yes) { rundll32.exe user32.dll,LockWorkStation }"
OutputType=UTF8
State=Hide

[mRestart]
Measure=Plugin
Plugin=RunCommand
Program=Powershell
Parameter="Add-Type -AssemblyName System.Windows.Forms; if ([System.Windows.Forms.MessageBox]::Show('Do you want to restart the PC?', 'Rainmeter - CCRS by @336conaN', [System.Windows.Forms.MessageBoxButtons]::YesNo, [System.Windows.Forms.MessageBoxIcon]::Question) -eq [System.Windows.Forms.DialogResult]::Yes) { Restart-Computer -Force }"
OutputType=UTF8
State=Hide

[mShutdown]
Measure=Plugin
Plugin=RunCommand
Program=Powershell
Parameter="Add-Type -AssemblyName System.Windows.Forms; if ([System.Windows.Forms.MessageBox]::Show('Do you want to shutdown the PC?', 'Rainmeter - CCRS by @336conaN', [System.Windows.Forms.MessageBoxButtons]::YesNo, [System.Windows.Forms.MessageBoxIcon]::Question) -eq [System.Windows.Forms.DialogResult]::Yes) { Stop-Computer -Force }"
OutputType=UTF8
State=Hide

[mSignOut]
Measure=Plugin
Plugin=RunCommand
Program=Powershell
Parameter="Add-Type -AssemblyName System.Windows.Forms; if ([System.Windows.Forms.MessageBox]::Show('Do you want to sign out?', 'Rainmeter - CCRS by @336conaN', [System.Windows.Forms.MessageBoxButtons]::YesNo, [System.Windows.Forms.MessageBoxIcon]::Question) -eq [System.Windows.Forms.DialogResult]::Yes) { shutdown /l }"
OutputType=UTF8
State=Hide
