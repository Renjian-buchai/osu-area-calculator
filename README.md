# Osu Area Calculator

Welcome to Osu Area Calculator, the ultimate calculator for your tablet area!

## Why Osu Area Calculator

Why us? I don't know. Frankly, you can just do all your calculations manually. The calculations Osu Area Calculator runs isn't rocket science. Why did I even waste my time in this?

## Features

<details><summary>Editing area</summary><p> Calculating area based on old data, new expected height, and new expected aspect ratio</p></details>
- Supports:
  - Open Tablet Driver
  - Wacom
<details><summary>Scaling area</summary> Calculating area based on old data and expected scale</details>
- Supports: 
  - Open Tablet Driver 
  - Wacom

## TODO 

Adding a conversion calculator for VEIKK, XP-Pen, Huion, and Gaomon 

(For now, convert it yourself) 

(The reference is the OpenTabletDriver units, because that's what OpenTabletDriver lists on their website)

Driver | Formulae | Comments
:---|:---|:---
Wacom. VEIKK | Width = (Right - Left) / 100 <br>Height = (Bottom - Top) / 100 <br>X offset = (Left / 100) + (Width / 2) <br>Y offset = (Right / 100) + (Height / 2) | Personally, I don't know if the offset fomulae work. 
XP-Pen |Width = W / 3.937 <br>Height = H / 3.937 <br>X Offset = (Width / 2) + (X / 3.937) <br>Y Offset = (Height / 2) + (Y / 3.937) | I have no clue where 3.937 comes from lmao. Either way, not my problem. 
Huion, Gaomon |	Width = (Right - Left) * tabletWidth<br>Height = (Bottom - Top) * tabletHeight<br>X Offset = (Width / 2) + (Left * tabletWidth)<br>Y Offset = (Height / 2) + (Top * tabletHeight) | 

Adding direct support for VEIKK, XP-Pen, Huion, and Gaomon
