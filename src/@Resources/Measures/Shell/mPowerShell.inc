[mInputPowerShell]
Measure=Plugin
Plugin=InputText
X=(50*#Scale#+(#BorderWidth#/2))
Y=(7*#Scale#+(#BorderWidth#/2))
W=(292*#Scale#)
H=(23*#Scale#)
FontFace=#NerdFont#
FontSize=(12*#Scale#)
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
