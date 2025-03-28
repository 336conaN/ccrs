[mShutdown]
Measure=Plugin
Plugin=RunCommand
Program=Powershell
Parameter=-Command "Add-Type -AssemblyName System.Windows.Forms; if ([System.Windows.Forms.MessageBox]::Show('Do you want to shutdown the PC?', 'Shutdown Confirmation', [System.Windows.Forms.MessageBoxButtons]::YesNo, [System.Windows.Forms.MessageBoxIcon]::Question) -eq [System.Windows.Forms.DialogResult]::Yes) { Stop-Computer -Force }"
OutputType=ANSI
State=Hide

[mRestart]
Measure=Plugin
Plugin=RunCommand
Program=Powershell
Parameter=-Command "Add-Type -AssemblyName System.Windows.Forms; if ([System.Windows.Forms.MessageBox]::Show('Do you want to restart the PC?', 'Restart Confirmation', [System.Windows.Forms.MessageBoxButtons]::YesNo, [System.Windows.Forms.MessageBoxIcon]::Question) -eq [System.Windows.Forms.DialogResult]::Yes) { Restart-Computer -Force }"
OutputType=ANSI
State=Hide

[mSleep]
Measure=Plugin
Plugin=RunCommand
Program=Powershell
Parameter=-Command "Add-Type -AssemblyName System.Windows.Forms; if ([System.Windows.Forms.MessageBox]::Show('Do you want to put the PC to sleep?', 'Sleep Confirmation', [System.Windows.Forms.MessageBoxButtons]::YesNo, [System.Windows.Forms.MessageBoxIcon]::Question) -eq [System.Windows.Forms.DialogResult]::Yes) { rundll32.exe powrprof.dll,SetSuspendState 0,1,0 }"
OutputType=ANSI
State=Hide

[mLock]
Measure=Plugin
Plugin=RunCommand
Program=Powershell
Parameter=-Command "Add-Type -AssemblyName System.Windows.Forms; if ([System.Windows.Forms.MessageBox]::Show('Do you want to lock the PC?', 'Lock Confirmation', [System.Windows.Forms.MessageBoxButtons]::YesNo, [System.Windows.Forms.MessageBoxIcon]::Question) -eq [System.Windows.Forms.DialogResult]::Yes) { rundll32.exe user32.dll,LockWorkStation }"
OutputType=ANSI
State=Hide

[mSignOut]
Measure=Plugin
Plugin=RunCommand
Program=Powershell
Parameter=-Command "Add-Type -AssemblyName System.Windows.Forms; if ([System.Windows.Forms.MessageBox]::Show('Do you want to sign out?', 'SignOut Confirmation', [System.Windows.Forms.MessageBoxButtons]::YesNo, [System.Windows.Forms.MessageBoxIcon]::Question) -eq [System.Windows.Forms.DialogResult]::Yes) { shutdown /l }"
OutputType=ANSI
State=Hide
