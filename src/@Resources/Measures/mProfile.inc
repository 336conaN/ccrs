[mUserName]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=SOFTWARE\Microsoft\Windows NT\CurrentVersion
RegValue=RegisteredOwner

[mDeviceName]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=SYSTEM\CurrentControlSet\Control\ComputerName\ComputerName
RegValue=ComputerName
RegExpSubstitute=1
Substitute="A":"a","B":"b","C":"c","D":"d","E":"e","F":"f","G":"g","H":"h","I":"i","J":"j","K":"k","L":"l","M":"m","N":"n","O":"o","P":"p","Q":"q","R":"r","S":"s","T":"t","U":"u","V":"v","W":"w","X":"x","Y":"y","Z":"z"
