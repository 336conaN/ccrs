[mInputPowerShell]
Measure=Plugin
Plugin=InputText
X=(50#Position#)
Y=(7#Position#)
W=(292#Size#)
H=(23#Size#)
FontFace=#NerdFont#
FontSize=(12#Size#)
FontWeight=#FontWeightMain#
FontColor=#Foreground#
SolidColor=#Surface#
DynamicVariables=1
AntiAlias=1
ClipString=2
Command1=[!SetVariable InputPowerShell "$UserInput$"][!UpdateMeasure "mRunPowerShell"][!CommandMeasure "mRunPowerShell" "Run"]

[mRunPowerShell]
Measure=Plugin
Plugin=RunCommand
Program=PowerShell
Parameter=#InputPowerShell#
State=Hide
DynamicVariables=1
