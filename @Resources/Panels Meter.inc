[Holder]
 Meter = Shape 
 Shape = Rectangle 0,0,620,420 | Extend MyStyle
 Shape2 = Rectangle 630r,0,140,100 | Extend MyStyle
 MyStyle = Fill Color #Color3# | StrokeWidth 0 
 X = 0 
 Y = 0

[Holder2]
 Meter = Shape
 Shape = Rectangle 0,0,140,200 | Fill Color #Color3# | StrokeWidth 0 
 X = 630r
 Y = 110r

[Bands]
 Meter = Shape
 Shape =   Rectangle 0, (((0.9*0))*#Scale#),  (100*[Band0]), (1.5*#Scale#), 1 | Extend Style
 Shape2 =  Rectangle 0, (((0.9*2))*#Scale#),  (100*[Band1]), (1.5*#Scale#), 1 | Extend Style
 Shape3 =  Rectangle 0, (((0.9*4))*#Scale#),  (100*[Band2]), (1.5*#Scale#), 1 | Extend Style
 Shape4 =  Rectangle 0, (((0.9*6))*#Scale#),  (100*[Band3]), (1.5*#Scale#), 1 | Extend Style
 Shape5  = Rectangle 0, (((0.9*8))*#Scale#),  (100*[Band4]), (1.5*#Scale#), 1 | Extend Style
 Shape6  = Rectangle 0, (((0.9*10))*#Scale#),  (100*[Band5]), (1.5*#Scale#), 1 | Extend Style
 Shape7  = Rectangle 0, (((0.9*12))*#Scale#),  (100*[Band6]), (1.5*#Scale#), 1 | Extend Style
 Shape8  = Rectangle 0, (((0.9*14))*#Scale#),  (100*[Band2]), (1.5*#Scale#), 1 | Extend Style
 Shape9  = Rectangle 0, (((0.9*16))*#Scale#),  (100*[Band1]), (1.5*#Scale#), 1 | Extend Style
 Shape10 = Rectangle 0, (((0.9*18))*#Scale#),  (100*[Band0]), (1.5*#Scale#), 1 | Extend Style
 Style = Fill Color 245,131,71 | StrokeWidth 0 | 
 X = (1.2 * #Scale#)r
 Y = ( 1.1 * #Scale#)r
 AntiAlias = 1
 DynamicVariables = 1

[Image]
 Meter = Image
 MeasureName = SildeShow
 W = 600
 H = 400
 PreserveAspectRatio = 2
 X = 10
 Y = 10

[Home]
 Meter = String
 MeterStyle = FontStyle
 X = 670
 Y = 5
 Text = Home
 MouseOverAction = [!SetOption Home FontColor "#Color2#"]
 MouseLeaveAction = [!SetOption Home FontColor "#Color1#"]
 LeftMouseUpAction = #Path1#

[Downloads]
 Meter = String
 MeterStyle = FontStyle
 X = 645
 Y = 30r
 Text = Downloads
 MouseOverAction = [!SetOption Downloads FontColor "#Color2#"]
 MouseLeaveAction = [!SetOption Downloads FontColor "#Color1#"]
 LeftMouseUpAction = #Path2#

[Wallpapers]
 Meter = String
 MeterStyle = FontStyle
 X = 640
 Y = 30r
 Text = Wallpapers
 MouseOverAction = [!SetOption Wallpapers FontColor "#Color2#"]
 MouseLeaveAction = [!SetOption Wallpapers FontColor "#Color1#"]
 LeftMouseUpAction = #Path3#