[Variables]

;-----------------;
;     COLORS      ;
;-----------------;

 Color1 = 255,255,255
 ; LINK COLOR
 Color2 = 245,138,71
 ; VIS COLOR
 Color3 = 27,27,27
 ; BACKGROUND COLOR
 Color4 = 27,27,27
 ; TM INFO WINDOW COLOR
 Color5 = 255,255,255
 ; TM HOLDER COLOR
 Color6 = 185,114,208
 ; CPU1 COLOR
 Color7 = 221, 107, 116
 ;CPUAVG COLOR
 Color8 = 97, 175, 239
 ;CPU USE and CPU4 COLOR
 Color9 = 206, 174, 115
 ;CPU2 COLOR
 Color10 = 150, 192, 120
 ;CPU3 COLOR
 Color11 = 255,255,255
 ;PROCESS COLOR
;-----------------;
; PATH TO FOLDERS ;
;-----------------;

 Path1 = ["explorer.exe"]
 Path2 = [Shell:::{374DE290-123F-4565-9164-39C4925E467B}]
 Path3 = [Shell:::{3ADD1653-EB32-4cb0-BBD7-DFA0ABB5ACCA}]

;-----------------;
;  MISC VARIABLE  ;
;-----------------;

 Scale = 10
 ScrollMouseIncrement = 0.05
 AverageSize = 4

;-----------------;
;  FONT SETTINGS  ;
;-----------------;

[FontStyle]
 FontFace = JetBrains Mono
 FontSize = 15
 FontColor = #Color1#
 AntiAlias = 1
 DynamicVariables = 1

[FontStyle2]
 FontFace = JetBrains Mono
 FontSize = (1.5 * #Scale#)
 FontColor = #Color1#
 AntiAlias = 1
 DynamicVariables = 1