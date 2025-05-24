[Variables]

  ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;  
  ;;                                                        ;;  
  ;;             ██████  ██████ ██████  ███████             ;;  
  ;;            ██      ██      ██   ██ ██                  ;;  
  ;;            ██      ██      ██████  ███████             ;;  
  ;;            ██      ██      ██   ██      ██             ;;  
  ;;             ██████  ██████ ██   ██ ███████             ;;  
  ;;                                                        ;;  
  ;;              https://github.com/336conaN               ;;  
  ;;             https://codeberg.org/336conaN              ;;  
  ;;                                                        ;;  
  ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;  

  ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;  
  ;;                                                        ;;  
  ;;               Please check the README!                 ;;  
  ;;  https://github.com/336conaN/ccrs/blob/main/README.md  ;;  
  ;;                                                        ;;  
  ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;  

; currently included themes: "Default", "CatppuccinMocha", "CatppuccinFrappe", "CatppuccinMacchiato", "CatppuccinLatte"
Theme=Default

; scale of all widgets, I recommend using 1.0 on 1080p displays
Scale=1.0

; border color for all widgets, has to be in RGB format (0-255)
BorderColor=38,41,56

; border width for all widgets
BorderWidth=1

; font to use for regular text, can be any font as long as it's installed on your system
TextFont=SF Pro Text

; font to use for icons, can be any nerd font as long as it's "Propo", otherwise icons will be too small
NerdFont=Liga SFMono Nerd Font Propo

; font Weight for most text
FontWeightMain=500

; font Weight for not-as-important text or subheaders like the artist name in the media player widget
FontWeightSub=400

; outer corner radius for all widgets, set to 8 to match the default Windows 11 style or 0 for sharp corners
CornerRadiusOutside=8

; corner radius of elements inside widgets like the cover image in the media player widget, set to 6 to match the default Windows 11 style or 0 for sharp corners
CornerRadiusInside=6

; setting this to "true" will disable the default rainmeter context menu for all widgets to make it feel more 'native'
DisableContextMenu=false

; setting this to "true" will open the config file in your default text editor when you middle-click(scroll wheel click) any widget
OpenConfigOnClick=true

; image to display in the WinFetch widget
; WinFetchLogo=%USERPROFILE%\Pictures\Other\windows.png

; image to display in the WslFetch widget
; WslFetchLogo=%USERPROFILE%\Pictures\Other\linux.png

; path to the ShareX executable, used for screenshot-buttons
ShareXPath=C:\Program Files\ShareX\ShareX.exe

; the path to your screenshots folder, used to open the folder when right-clicking the widget
ScreenshotsFolder=%USERPROFILE%\Pictures

; decreasing this number will reduce cpu usage but make the visualizer less accurate
VisualizerFrequencyResolution=1024

; this is the sensitivity of the visualizer, adjust this to fit your audio source and speaker/headphone configuration
VisualizerSensitivity=35.0

; the index HWiNFO uses to report the respective sensor
; see https://docs.rainmeter.net/tips/hwinfo/ for more information
CpuTempIndex=2
CpuUsageIndex=1
GpuTempIndex=6
GpuUsageIndex=7
DiskTempIndex=4
DiskUsageIndex=5
MemoryTempIndex=3
MemoryUsageIndex=0

; rainmeter does not have native support for animated .gif files. this is a workaround by converting the .gif to a .png bitmap.
; see method two in https://docs.rainmeter.net/tips/animated-gif-files/ on how to set this up, method one is not recommended as it requires a lot of resources
; adjust the refresh rate to speed up or slow down the animation, adjust this as you like
; Gif1BitMap="%USERPROFILE%\Pictures\cool-gif.png"
; Gif1FrameCount=80
; Gif1RefreshRate=40

; set the color, icon and command for the respective shortcut. can be a folder, file, game or website. basically anything a regular desktop shortcut can do
; setting the color to #Accent1-6# will use your selected theme's colors, alternatively you can use a RGB format (0-255).
; Shortcut1Icon="%USERPROFILE%\Downloads\explorer.png"
; Shortcut1Color="#Accent6#"
; Shortcut1Command="explorer.exe"

; Shortcut2Icon="%USERPROFILE%\Downloads\taskmanager.png"
; Shortcut2Color="255,255,255"
; Shortcut2Command="taskmgr.exe"

; the image to display in the respective image widget
; Image1=%USERPROFILE%\Pictures\profile.png

; set the icon, title and command for the respective list. can be a folder, file, game or website. basically anything a regular desktop shortcut can do
; to find nice icons, you can use https://www.nerdfonts.com/cheat-sheet. keep in mind that you have to wrap the UTF in brackets and change u to x. for examole: \uF000 becomes [\xf000].
List1Entry1Icon=[\xf07b]
List1Entry1Title=Documents
List1Entry1Command="%USERPROFILE%\Documents"
List1Entry2Icon=[\xf07b]
List1Entry2Title=Downloads
List1Entry2Command="%USERPROFILE%\Downloads"
List1Entry3Icon=[\xf07b]
List1Entry3Title=Pictures
List1Entry3Command="%USERPROFILE%\Pictures"
List1Entry4Icon=[\xf07b]
List1Entry4Title=Videos
List1Entry4Command="%USERPROFILE%\Videos"
