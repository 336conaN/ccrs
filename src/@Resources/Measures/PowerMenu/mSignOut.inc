[mSignOut]
Measure=Plugin
Plugin=RunCommand
Program=Powershell
Parameter="Add-Type -AssemblyName System.Windows.Forms; if ([System.Windows.Forms.MessageBox]::Show('Do you want to sign out?', 'Rainmeter - CCRS by @336conaN', [System.Windows.Forms.MessageBoxButtons]::YesNo, [System.Windows.Forms.MessageBoxIcon]::Question) -eq [System.Windows.Forms.DialogResult]::Yes) { shutdown /l }"
OutputType=UTF8
State=Hide
