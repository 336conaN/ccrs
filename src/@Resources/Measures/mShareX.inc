[mScreenshot]
Measure=Plugin
Plugin=RunCommand
Program=PowerShell
Parameter="Get-ChildItem #ScreenshotsFolder# | Where-Object {$_.Extension -eq '.png' -or $_.Extension -eq '.gif'} | Sort-Object CreationTime -Descending | Select-Object -First 1 | Select-Object -ExpandProperty FullName"
State=Hide
OutputType=ANSI
RegExpSubstitute=1
Substitute="[\n]":""
