# ⚒️ Configuration

The entire configuration is done through a single text file.
To change settings, edit `settings.inc` in a text editor of your choice and refresh all CCRS skins after.
<br>

#### How to open the config file?

- **Method 1 (easier)**
Simply `double right-click` on any loaded CCRS skin to open the config file
<br>

- **Method 2**
When using the default Rainmeter skin location, the file is located at:
`%USERPROFILE%\Documents\Rainmeter\Skins\ccrs\@Resources\settings.inc`
<br>

#### Configuration
```
[Variables]
-- This controls the overall size of the widgets. This can be anything from 0.1 up. --
Scale=1

-- Default apps for skin-related actions such as opening a directory or editing the config file. --
TextEditor=notepad.exe
FileExplorer=explorer.exe

-- The colortheme for all widgets. Check https://github.com/336conaN/ccrs/blob/main/docs/themes.md for all available options. --
Theme=catppuccin-mocha

-- The font for all widgets. Can be any font that's installed on the system. Included are "SFMono Nerd Font Mono" and "SF Pro" --
Font=SFMono Nerd Font Mono

-- The picture to display on the profile widget. Can be any .png or jpg, just add the path such as "C:\Users\RickAshley\rickroll.png" without quotes. --
ProfilePicture=#@#Assets\profile.png

-- The username to display on the profile widget. Can be any string. --
UserName=conaN

-- Path to the ShareX executable. This is for the screenshots widget. --
ShareX=C:\Program Files\ShareX\ShareX.exe

-- Path to your screenshot folder. The widget will display the latest taken screenshot from that folder. --
ScreenshotsPath=C:\Users\conaN\Pictures\Screenshots

-- Styles for all widget --
CornerRadiusOutside=8
CornerRadiusInside=6
BorderWidthOutside=0
BorderWidthInside=0

-- The filename and frame count of your GIF to play in the GIF widget. Check https://docs.rainmeter.net/tips/animated-gif-files/ for more info. --
GifName=wave
GifFrames=80

-- The HWiNFO Gadget-index for selected sensors. See https://docs.rainmeter.net/tips/hwinfo/ for more info. --
CpuTempIndex=2
CpuUsageIndex=1
GpuTempIndex=6
GpuUsageIndex=7
DriveTempIndex=4
DriveUsageIndex=5
RamTempIndex=3
RamUsageIndex=0

-- The repos to show in the git widget. Only supports WSL2 repos for now, Windows support will come with the next update. --
GitRepo1Name=ccrs
GitRepo1PathWSL=~/git/ccrs
GitRepo1PathWindows=\\wsl.localhost\NixOS\home\nixos\git\ccrs
GitRepo2Name=website
GitRepo2PathWSL=~/git/website
GitRepo2PathWindows=\\wsl.localhost\NixOS\home\nixos\git\website
GitRepo3Name=.win
GitRepo3PathWSL=~/dotfiles/.win
GitRepo3PathWindows=\\wsl.localhost\NixOS\home\nixos\dotfiles\.win
GitRepo4Name=.wsl
GitRepo4PathWSL=~/dotfiles/.wsl
GitRepo4PathWindows=\\wsl.localhost\NixOS\home\nixos\dotfiles\.wsl

-- The displayname and path of the folders to display in the folder widget. --
Folder1Name=Downloads
Folder1Path=C:\Users\conaN\Downloads
Folder2Name=Documents
Folder2Path=C:\Users\conaN\Documents
Folder3Name=Pictures
Folder3Path=C:\Users\conaN\Pictures
Folder4Name=Videos
Folder4Path=C:\Users\conaN\Videos

-- The 2 Disks to display in the folder widget. --
Disk1Label=C:
Disk2Label=D:
```
