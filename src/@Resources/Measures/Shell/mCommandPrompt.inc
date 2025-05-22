[mInputCommandPrompt]
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
Command1=[!SetVariable InputCommandPrompt "$UserInput$"][!UpdateMeasure "mRunCommandPrompt"][!CommandMeasure "mRunCommandPrompt" "Run"]

[mRunCommandPrompt]
Measure=Plugin
Plugin=RunCommand
Parameter=#InputCommandPrompt#
State=Hide
DynamicVariables=1
