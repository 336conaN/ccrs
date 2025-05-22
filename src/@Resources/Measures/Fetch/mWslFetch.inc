[mTitle]
Measure=Plugin
Plugin=RunCommand
Program=WSL
Parameter=bash -c "echo $(whoami)@$(hostname)"
State=Hide
OutputType=ANSI
RegExpSubstitute=1
Substitute="[\n]":""
FinishAction=[!UpdateMeter "Title"][!Redraw]

[mDistro]
Measure=Plugin
Plugin=RunCommand
Program=WSL
Parameter=bash -c "grep PRETTY_NAME /etc/os-release"
State=Hide
OutputType=ANSI
RegExpSubstitute=1
Substitute="[\n]":"",'"':"","PRETTY_NAME=":""
FinishAction=[!UpdateMeter "Distro"][!Redraw]

[mKernel]
Measure=Plugin
Plugin=RunCommand
Program=WSL
Parameter=bash -c "uname -r"
State=Hide
OutputType=ANSI
RegExpSubstitute=1
Substitute="[\n]":"","-microsoft-standard-":" "
FinishAction=[!UpdateMeter "Kernel"][!Redraw]

[mShell]
Measure=Plugin
Plugin=RunCommand
Program=WSL
Parameter=bash -c "echo $SHELL"
State=Hide
OutputType=ANSI
RegExpSubstitute=1
Substitute="[\n]":"","^.*/":""
FinishAction=[!UpdateMeter "Shell"][!Redraw]

[mEditor]
Measure=Plugin
Plugin=RunCommand
Program=WSL
Parameter="echo $EDITOR"
State=Hide
OutputType=ANSI
RegExpSubstitute=1
Substitute="[\n]":"","^.*/":""
FinishAction=[!UpdateMeter "Editor"][!Redraw]
