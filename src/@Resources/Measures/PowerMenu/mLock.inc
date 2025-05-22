[mLock]
Measure=Plugin
Plugin=RunCommand
Program=Powershell
Parameter="Add-Type -AssemblyName System.Windows.Forms; if ([System.Windows.Forms.MessageBox]::Show('Do you want to lock the PC?', 'Rainmeter - CCRS by @336conaN', [System.Windows.Forms.MessageBoxButtons]::YesNo, [System.Windows.Forms.MessageBoxIcon]::Question) -eq [System.Windows.Forms.DialogResult]::Yes) { rundll32.exe user32.dll,LockWorkStation }"
OutputType=UTF8
State=Hide
