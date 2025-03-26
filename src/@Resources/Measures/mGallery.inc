[mFolder]
Measure=Plugin
Plugin=FileView
Path=#Gallery#
ShowDotDot=0
ShowFolder=0
SortType=Date
SortDateType=Created
SortAscending=0
Count=1
OnUpdateAction=[!CommandMeasure mFolder Update]
DynamicVariables=1

[mChild]
Measure=Plugin
Plugin=FileView
Path=[mFolder]
Type=FileName
Index=1

[mChildDate]
Measure=Plugin
Plugin=FileView
Path=[mFolder]
Type=FileDate
Index=1
