# ⚒️ Configuration

<br>
The entire configuration is done through a single text file.
To change settings, edit `settings.inc` in a text editor of your choice and refresh the skins after.
<br>

**When using the default Rainmeter skin location, the file is located at:**
```
%USERPROFILE%\Documents\Rainmeter\Skins\ccrs\@Resources\settings.inc
```
<br>

**This is what the default config looks like:**
```
Scale=1
Transparency=255
Theme=catppuccin-mocha
Font=SFMono Nerd Font Mono
ProfilePicture=#@#Assets\profile.png
Gallery=C:\Users\conaN\Pictures\Screenshots
CornerRadiusOutside=8
CornerRadiusInside=6
BorderWidthOutside=0
BorderWidthInside=0
GitHub=336conaN
CodeBerg=336conaN
```
<br>

**Here is a list of all available options:**

| **Option**             | **Description**                                        | **Default Value**          | **Example**                                              |
|------------------------|--------------------------------------------------------|----------------------------|----------------------------------------------------------|
| `Scale`                | The overall size of the widgets.                       | `1`                        | Can range from `0.1` to `99`.                            |
| `Transparency`         | The background transparency of each widget.            | `255`                      | Can range from `0` to `255`.                             |
| `Theme`                | The colortheme of all widgets                          | `catppuccin-mocha`         | See all currently available themes [here](./themes.md).  |
| `Font`                 | Sets the font for all widgets.                         | `SFMono Nerd Font Mono`    | `Segoe UI`                                               |
| `ProfilePicture`       | Path to the image displayed on the `Profile` widget.   | `#@#Assets\profile.png`    | `C:\Users\RickAshley\Pictures\rickroll.png`              |
| `CornerRadiusOutside`  | Controls the outer corner radius of all widgets.       | `8`                        | `12` for more rounded corners.                           |
| `CornerRadiusInside`   | Controls the corner radius of elements inside widgets. | `6`                        | `10` for more rounded elements.                          |
| `BorderWidthOutside`   | Width of the outer border.                             | `0`                        | `2` for a 2px border around all widgets.                 |
| `BorderWidthInside`    | Width of the border around certain widget elements.    | `0`                        | `1` for a 1px border around certain elements.            |
