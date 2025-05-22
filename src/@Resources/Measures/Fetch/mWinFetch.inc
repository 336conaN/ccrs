
[mTitle]
Measure=Plugin
Plugin=RunCommand
Program=PowerShell
Parameter="'{0}@{1}' -f (Get-CimInstance -ClassName Win32_OperatingSystem).RegisteredUser, ((Get-CimInstance -ClassName Win32_ComputerSystem).Name.ToLower())"
State=Hide
OutputType=ANSI
RegExpSubstitute=1
Substitute="[\n]":""
FinishAction=[!UpdateMeter "Title"][!Redraw]

[mEdition]
Measure=Plugin
Plugin=RunCommand
Program=PowerShell
Parameter="(Get-CimInstance -ClassName Win32_OperatingSystem).Caption"
State=Hide
OutputType=ANSI
RegExpSubstitute=1
Substitute="[\n]":"","Microsoft ":"","Enterprise ":""
FinishAction=[!UpdateMeter "Edition"][!Redraw]

[mBuild]
Measure=Plugin
Plugin=RunCommand
Program=PowerShell
Parameter="(Get-CimInstance -ClassName Win32_OperatingSystem).BuildNumber"
State=Hide
OutputType=ANSI
RegExpSubstitute=1
Substitute="[\n]":""
FinishAction=[!UpdateMeter "Build"][!Redraw]

[mCPU]
Measure=Plugin
Plugin=RunCommand
Program=PowerShell
Parameter="(Get-CimInstance -ClassName Win32_Processor).Name"
State=Hide
OutputType=ANSI
RegExpSubstitute=1
Substitute="[\n]":"","^.*Intel\(R\) Core\(TM\)\s*":""
FinishAction=[!UpdateMeter "CPU"][!Redraw]

[mGPU]
Measure=Plugin
Plugin=RunCommand
Program=PowerShell
Parameter="(Get-CimInstance -ClassName Win32_VideoController).Name"
State=Hide
OutputType=ANSI
RegExpSubstitute=1
Substitute="[\n]":"","^.*RTX\s*":""
FinishAction=[!UpdateMeter "GPU"][!Redraw]
