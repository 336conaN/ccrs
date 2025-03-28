[mGitFilesChangedRepo1]
Measure=Plugin
Plugin=RunCommand
Program=WSL
Parameter=git -C #GitRepo1PathWSL# diff --shortstat | awk '{print $1}'
State=Hide
OutputType=ANSI
RegExpSubstitute=1
Substitute="":"0","[\n]":""
DynamicVariables=1

[mGitInsertionsRepo1]
Measure=Plugin
Plugin=RunCommand
Program=WSL
Parameter=git -C #GitRepo1PathWSL# diff --shortstat | awk '{print $4}'
State=Hide
OutputType=ANSI
RegExpSubstitute=1
Substitute="":"0","[\n]":""

[mGitDeletionsRepo1]
Measure=Plugin
Plugin=RunCommand
Program=WSL
Parameter=git -C #GitRepo1PathWSL# diff --shortstat | awk '{print $6}'
State=Hide
OutputType=ANSI
RegExpSubstitute=1
Substitute="":"0","[\n]":""

[mGitFilesChangedRepo2]
Measure=Plugin
Plugin=RunCommand
Program=WSL
Parameter=git -C #GitRepo2PathWSL# diff --shortstat | awk '{print $1}'
State=Hide
OutputType=ANSI
RegExpSubstitute=1
Substitute="":"0","[\n]":""
DynamicVariables=1

[mGitInsertionsRepo2]
Measure=Plugin
Plugin=RunCommand
Program=WSL
Parameter=git -C #GitRepo2PathWSL# diff --shortstat | awk '{print $4}'
State=Hide
OutputType=ANSI
RegExpSubstitute=1
Substitute="":"0","[\n]":""

[mGitDeletionsRepo2]
Measure=Plugin
Plugin=RunCommand
Program=WSL
Parameter=git -C #GitRepo2PathWSL# diff --shortstat | awk '{print $6}'
State=Hide
OutputType=ANSI
RegExpSubstitute=1
Substitute="":"0","[\n]":""

[mGitFilesChangedRepo3]
Measure=Plugin
Plugin=RunCommand
Program=WSL
Parameter=git -C #GitRepo3PathWSL# diff --shortstat | awk '{print $1}'
State=Hide
OutputType=ANSI
RegExpSubstitute=1
Substitute="":"0","[\n]":""
DynamicVariables=1

[mGitInsertionsRepo3]
Measure=Plugin
Plugin=RunCommand
Program=WSL
Parameter=git -C #GitRepo3PathWSL# diff --shortstat | awk '{print $4}'
State=Hide
OutputType=ANSI
RegExpSubstitute=1
Substitute="":"0","[\n]":""

[mGitDeletionsRepo3]
Measure=Plugin
Plugin=RunCommand
Program=WSL
Parameter=git -C #GitRepo3PathWSL# diff --shortstat | awk '{print $6}'
State=Hide
OutputType=ANSI
RegExpSubstitute=1
Substitute="":"0","[\n]":""

[mGitFilesChangedRepo4]
Measure=Plugin
Plugin=RunCommand
Program=WSL
Parameter=git -C #GitRepo4PathWSL# diff --shortstat | awk '{print $1}'
State=Hide
OutputType=ANSI
RegExpSubstitute=1
Substitute="":"0","[\n]":""
DynamicVariables=1

[mGitInsertionsRepo4]
Measure=Plugin
Plugin=RunCommand
Program=WSL
Parameter=git -C #GitRepo4PathWSL# diff --shortstat | awk '{print $4}'
State=Hide
OutputType=ANSI
RegExpSubstitute=1
Substitute="":"0","[\n]":""

[mGitDeletionsRepo4]
Measure=Plugin
Plugin=RunCommand
Program=WSL
Parameter=git -C #GitRepo4PathWSL# diff --shortstat | awk '{print $6}'
State=Hide
OutputType=ANSI
RegExpSubstitute=1
Substitute="":"0","[\n]":""
