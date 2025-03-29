[mInput]
Measure=Plugin
Plugin=InputText
X=(45*#Scale#+(#BorderWidthOutside#/2))
Y=(4*#Scale#+(#BorderWidthOutside#/2))
W=(301*#Scale#)
H=(27*#Scale#)
FontFace=#Font#
FontSize=(15*#Scale#)
FontWeight=400
FontColor=#Text#
SolidColor=#Accent#
DynamicVariables=1
AntiAlias=1
ClipString=2
Command1=[!SetVariable Input "$UserInput$"][!UpdateMeasure "mRun"][!CommandMeasure "mRun" "Run"]

[mRun]
Measure=Plugin
Plugin=RunCommand
Parameter=#Input#
State=Hide
DynamicVariables=1
