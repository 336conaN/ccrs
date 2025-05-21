[mCover]
Measure=Plugin
Plugin=MediaPlayer
PlayerType=Cover

[mPlayPause]
Measure=Plugin
Plugin=MediaPlayer
PlayerType=State
RegExpSubstitute=1
Substitute="^0$":"#Play#","^1$":"#Pause#","^2$":"#Play#"

[mTitle]
Measure=Plugin
Plugin=MediaPlayer
PlayerType=Title
Substitute="":"Title"

[mArtist]
Measure=Plugin
Plugin=MediaPlayer
PlayerType=Artist
Substitute="":"Artist"
