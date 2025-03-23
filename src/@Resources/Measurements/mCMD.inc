[mInput]
Measure=Plugin
Plugin=InputText
X=(45*#Scale#+(#BorderWidthOutside#/2))
Y=(5*#Scale#+(#BorderWidthOutside#/2))
W=(295*#Scale#)
H=(25*#Scale#)
FontFace=#MonoFont#
FontSize=(14*#Scale#)
FontWeight=500
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
