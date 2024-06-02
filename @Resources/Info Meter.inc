[FrostGlass]
 Measure = Plugin
 Plugin = FrostedGlass
 Type = Blur
 Corner = None

[TitleBar]
 Meter = Shape
 Shape = Rectangle 0, 0, (110 * #Scale#), (7 * #Scale#) | Extend WindowStyle
 WindowStyle = Fill Color 0,0,0,1 | StrokeWidth 0 
 X = 0
 Y = 0

[CloseButton]
 Meter = Image
 ImageName = #@#Close.png
 W =(2.8 * #Scale#)
 X = (106 * #Scale#)
 Y = (1.3 * #Scale#)
 ImageTint = 255,255,255
 MouseOverAction = [!SetOption CloseButton ImageTint  "255,0,0"]
 MouseLeaveAction = [!SetOption CloseButton ImageTint "255,255,255"]
 LeftMouseUpAction = [!DeactivateConfig]

[RefreshButton]
 Meter = Image
 ImageName = #@#Refresh.png
 W =(2.8 * #Scale#)
 X = (102 * #Scale#)
 Y = (1.3 * #Scale#)
 ImageTint = 255,255,255
 MouseOverAction = [!SetOption RefreshButton ImageTint  "97, 175, 239"]
 MouseLeaveAction = [!SetOption RefreshButton ImageTint "255,255,255"]
 LeftMouseUpAction = [!Refresh]

[MainWindow]
 Meter = Shape
 Shape = Rectangle (1 * #Scale#), (1 * #Scale#), (35 * #Scale#), (5 * #Scale#), 8 | Extend WindowStyle
 Shape2 = Rectangle 0, (5 * #Scale#), (110 * #Scale#), (70 * #Scale#) | Extend WindowStyle
 WindowStyle = Fill Color #Color4# | StrokeWidth 0 
 X = 0
 Y = 0 

[HolderGroup1]
 Meter = Shape
 Shape = Rectangle 0, 0, (80 * #Scale#), (20 * #Scale#) | Extend WindowStyle
 Shape2 = Rectangle (82 * #Scale#), 0, (24 * #Scale#), (20 * #Scale#) | Extend WindowStyle
 WindowStyle = Fill Color #Color4#,1 | StrokeWidth 2 | Stroke Color #Color5# 
 X = (2 * #Scale#)
 Y = (7 * #Scale#)

[Shell.IMG]
 Meter = Image
 ImageName = #@#Shell.png
 W = (3 * #Scale#)
 X = (3 * #Scale#)
 Y = (1.8 * #Scale#)

[Shell.txt]
 Meter = String
 MeterStyle = FontStyle2
 Text = Yet Another SysInfo
 X = (8 * #Scale#)
 Y = (1.8 * #Scale#)

[CPU.txt]
 Meter = String
 MeterStyle = FontStyle2
 Text = CPU
 W = (5 * #Scale#)
 X = (3 * #Scale#)
 Y = (5.5 * #Scale#)
 Padding = (1 * #Scale#),0,0,0
 SolidColor = #Color4#

[HolderGroup2]
 Meter = Shape
 Shape = Rectangle 0, 0, (69 * #Scale#), (22 * #Scale#) | Extend WindowStyle
 Shape2 = Rectangle (71 * #Scale#), 0, (35 * #Scale#), (10 * #Scale#) | Extend WindowStyle
 Shape3 = Rectangle (71 * #Scale#), (12 * #Scale#), (35 * #Scale#), (10 * #Scale#) | Extend WindowStyle
 WindowStyle = Fill Color #Color4#,1 | StrokeWidth 2 | Stroke Color #Color5# 
 X = (2 * #Scale#)
 Y = (30 * #Scale#)

[Memory.txt]
 Meter = String
 MeterStyle = FontStyle2
 Text = Memory
 W = (8 * #Scale#)
 X = (3 * #Scale#)
 Y = (29 * #Scale#)
 Padding = (1 * #Scale#),0,0,0
 SolidColor = #Color4#

[Temp.txt]
 Meter = String
 MeterStyle = FontStyle2
 Text = Temperatures
 W = (15 * #Scale#)
 X = (74 * #Scale#)
 Y = (29 * #Scale#)
 Padding = (1 * #Scale#),0,0,0
 SolidColor = #Color4#

[Disk.txt]
 Meter = String
 MeterStyle = FontStyle2
 Text = Disks
 W = (7 * #Scale#)
 X = (74 * #Scale#)
 Y = (41 * #Scale#)
 Padding = (1 * #Scale#),0,0,0
 SolidColor = #Color4#

[HolderGroup3]
 Meter = Shape
 Shape = Rectangle 0, 0, (49 * #Scale#), (18 * #Scale#) | Extend WindowStyle
 Shape2 = Rectangle (51 * #Scale#), 0, (55 * #Scale#), (18 * #Scale#) | Extend WindowStyle | Stroke Color #Color8# 
 WindowStyle = Fill Color #Color4#,1 | StrokeWidth 2 | Stroke Color #Color5# 
 X = (2 * #Scale#)
 Y = (55 * #Scale#)

[Network.txt]
 Meter = String
 MeterStyle = FontStyle2
 Text = Network
 W = (10 * #Scale#)
 X = (3 * #Scale#)
 Y = (54 * #Scale#)
 Padding = (1 * #Scale#),0,0,0
 SolidColor = #Color4#

[Process.txt]
 Meter = String
 MeterStyle = FontStyle2
 Text = Processes
 W = (12 * #Scale#)
 X = (54 * #Scale#)
 Y = (54 * #Scale#)
 Padding = (1 * #Scale#),0,0,0
 SolidColor = #Color4#

;-----;
; CPU ;
;-----;

[AllCPU]
 Meter = String
 MeterStyle = FontStyle2
 Text = CPU 
 X = (85 * #Scale#)
 Y = (8 * #Scale#)
 FontColor = #Color8#

[USE]
 Meter = String
 MeterStyle = FontStyle2
 Text = USE 
 X = (103 * #Scale#)
 Y = (8 * #Scale#)
 FontColor = #Color8#

[CPUAVG]
 Meter = Line
 MeasureName = MeasureCPUAVG
 X = (8 * #Scale#)
 Y = (12 * #Scale#)
 W = (72 * #Scale#)
 H = (9 * #Scale#)
 LineCount = 1
 LineWidth = 2
 LineColor = #Color7#
 AntiAlias = 1
 DynamicVariables = 1

[CPUAVG.txt]
 Meter = String
 MeterStyle = FontStyle2
 Text = AVG 
 X = (85 * #Scale#)
 Y = (11 * #Scale#)
 FontColor = #Color7#

[CPUAVGNumber]
 Meter = String
 MeasureName = MeasureCPUAVG
 MeterStyle = FontStyle2
 Text = %1
 X = (103 * #Scale#)
 Y = (0 * #Scale#)r
 FontColor = #Color7#

[CPU1]
 Meter = Line
 MeasureName = MeasureCPU1
 X = (8 * #Scale#)
 Y = (12 * #Scale#)
 W = (72 * #Scale#)
 H = (9 * #Scale#)
 LineCount = 1
 LineWidth = 2
 LineColor = #Color6#
 AntiAlias = 1
 DynamicVariables = 1

[CPU1.txt]
 Meter = String
 MeterStyle = FontStyle2
 Text = CPU1 
 X = (85 * #Scale#)
 Y = (14 * #Scale#)
 FontColor = #Color6#

[CPU1Number]
 Meter = String
 MeasureName = MeasureCPU1
 MeterStyle = FontStyle2
 Text = %1
 X = (103 * #Scale#)
 Y = (0 * #Scale#)r
 FontColor = #Color6#

[CPU2]
 Meter = Line
 MeasureName = MeasureCPU2
 X = (8 * #Scale#)
 Y = (12 * #Scale#)
 W = (72 * #Scale#)
 H = (9 * #Scale#)
 LineCount = 1
 LineWidth = 2
 LineColor = #Color9#
 AntiAlias = 1
 DynamicVariables = 1

[CPU2.txt]
 Meter = String
 MeterStyle = FontStyle2
 Text = CPU2 
 X = (85 * #Scale#)
 Y = (17 * #Scale#)
 FontColor = #Color9#

[CPU2Number]
 Meter = String
 MeasureName = MeasureCPU2
 MeterStyle = FontStyle2
 Text = %1
 X = (103 * #Scale#)
 Y = (0 * #Scale#)r
 FontColor = #Color9#

[CPU3]
 Meter = Line
 MeasureName = MeasureCPU3
 X = (8 * #Scale#)
 Y = (12 * #Scale#)
 W = (72 * #Scale#)
 H = (9 * #Scale#)
 LineCount = 1
 LineWidth = 2
 LineColor = #Color10#
 AntiAlias = 1
 DynamicVariables = 1

[CPU3.txt]
 Meter = String
 MeterStyle = FontStyle2
 Text = CPU3 
 X = (85 * #Scale#)
 Y = (20 * #Scale#)
 FontColor = #Color10#

[CPU3Number]
 Meter = String
 MeasureName = MeasureCPU3
 MeterStyle = FontStyle2
 Text = %1
 X = (103 * #Scale#)
 Y = (0 * #Scale#)r
 FontColor = #Color10#

[CPU4]
 Meter = Line
 MeasureName = MeasureCPU4
 X = (8 * #Scale#)
 Y = (12 * #Scale#)
 W = (72 * #Scale#)
 H = (9 * #Scale#)
 LineCount = 1
 LineWidth = 2
 LineColor = #Color8#
 AntiAlias = 1
 DynamicVariables = 1

[CPU4.txt]
 Meter = String
 MeterStyle = FontStyle2
 Text = CPU4 
 X = (85 * #Scale#)
 Y = (23 * #Scale#)
 FontColor = #Color8#

[CPU4Number]
 Meter = String
 MeasureName = MeasureCPU4
 MeterStyle = FontStyle2
 Text = %1
 X = (103 * #Scale#)
 Y = (0 * #Scale#)r
 FontColor = #Color8#

[CPU.GRAPH]
 Meter = Shape
 Shape = Rectangle 0, 0, (72 * #Scale#), (0.2 * #Scale#) | Extend WindowStyle
 Shape2 = Rectangle 0, 0, (0.2 * #Scale#), (-14 * #Scale#) | Extend WindowStyle
 WindowStyle = Fill Color #Color5# | StrokeWidth 0 
 X = (8 * #Scale#)
 Y = (23 * #Scale#)

[CPU.0]
 Meter = String
 MeterStyle = FontStyle2
 Text = 0%
 X = (4 * #Scale#)
 Y = (20 * #Scale#)

[CPU.100]
 Meter = String
 MeterStyle = FontStyle2
 Text = 100%
 X = (3 * #Scale#)
 Y = (9 * #Scale#)

;------;
;MEMORY;
;------;

[GraphLegend1]
 Meter = String
 MeterStyle = FontStyle2
 FontColor = #Color6#
 FontSize = (4 * #Scale#)
 Text = .
 X = (51.5 * #Scale#)
 Y = (28.7 * #Scale#)

[GraphLegend1.txt]
 Meter = String
 MeterStyle = FontStyle2
 Text = RAM
 X = (54 * #Scale#)
 Y = (32 * #Scale#)

[GraphLegend2]
 Meter = String
 MeterStyle = FontStyle2
 FontColor = #Color9#
 FontSize = (4 * #Scale#)
 Text = .
 X = (60 * #Scale#)
 Y = (28.7 * #Scale#)

[GraphLegend2.txt]
 Meter = String
 MeterStyle = FontStyle2
 Text = SWAP
 X = (62.5 * #Scale#)
 Y = (32 * #Scale#)

[Memory]
 Meter = Line
 MeasureName = MeasureMemory
 X = (8 * #Scale#)
 Y = (39 * #Scale#)
 W = (62 * #Scale#)
 H = (7 * #Scale#)
 LineCount = 1
 LineWidth = 2
 LineColor = #Color6#
 AntiAlias = 1
 DynamicVariables = 1

[SwapMemory]
 Meter = Line
 MeasureName = MeasureSwapMemory
 X = (8 * #Scale#)
 Y = (39 * #Scale#)
 W = (62 * #Scale#)
 H = (7 * #Scale#)
 LineCount = 1
 LineWidth = 2
 LineColor = #Color9#
 AntiAlias = 1
 DynamicVariables = 1

[Memory.GRAPH]
 Meter = Shape
 Shape = Rectangle 0, 0, (62 * #Scale#), (0.2 * #Scale#) | Extend WindowStyle
 Shape2 = Rectangle 0, 0, (0.2 * #Scale#), (-15 * #Scale#) | Extend WindowStyle
 WindowStyle = Fill Color #Color5# | StrokeWidth 0 
 X = (8 * #Scale#)
 Y = (48 * #Scale#)

[Memory.0]
 Meter = String
 MeterStyle = FontStyle2
 Text = 0%
 X = (4 * #Scale#)
 Y = (45 * #Scale#)

[Memory.100]
 Meter = String
 MeterStyle = FontStyle2
 Text = 100%
 X = (3 * #Scale#)
 Y = (33 * #Scale#)

;-------;
;NETWORK;
;-------;

[GraphLegend3]
 Meter = String
 MeterStyle = FontStyle2
 FontColor = #Color6#
 FontSize = (4 * #Scale#)
 Text = .
 X = (13 * #Scale#)
 Y = (52.5 * #Scale#)

[GraphLegend3.txt]
 Meter = String
 MeterStyle = FontStyle2
 Text = Download
 X = (15.5 * #Scale#)
 Y = (55.8 * #Scale#)

[GraphLegend4]
 Meter = String
 MeterStyle = FontStyle2
 FontColor = #Color9#
 FontSize = (4 * #Scale#)
 Text = .
 X = (27 * #Scale#)
 Y = (52.5 * #Scale#)

[GraphLegend4.txt]
 Meter = String
 MeterStyle = FontStyle2
 Text = Upload
 X = (29.5 * #Scale#)
 Y = (55.8 * #Scale#)

[Downloads]
 Meter = Line
 MeasureName = MeasureDownload
 X = (8 * #Scale#)
 Y = (61 * #Scale#)
 W = (42 * #Scale#)
 H = (7 * #Scale#)
 LineCount = 1
 LineWidth = 2
 LineColor = #Color6#
 AntiAlias = 1
 DynamicVariables = 1

[Uploads]
 Meter = Line
 MeasureName = MeasureUpload
 X = (8 * #Scale#)
 Y = (61 * #Scale#)
 W = (42 * #Scale#)
 H = (7 * #Scale#)
 LineCount = 1
 LineWidth = 2
 LineColor = #Color9#
 AntiAlias = 1
 DynamicVariables = 1

[Network.GRAPH]
 Meter = Shape
 Shape = Rectangle 0, 0, (42 * #Scale#), (0.2 * #Scale#) | Extend WindowStyle
 Shape2 = Rectangle 0, 0, (0.2 * #Scale#), (-13 * #Scale#) | Extend WindowStyle
 WindowStyle = Fill Color #Color5# | StrokeWidth 0 
 X = (8 * #Scale#)
 Y = (70 * #Scale#)

[Network.0]
 Meter = String
 MeterStyle = FontStyle2
 Text = 0%
 X = (4 * #Scale#)
 Y = (67 * #Scale#)

[Network.100]
 Meter = String
 MeterStyle = FontStyle2
 Text = 100%
 X = (3 * #Scale#)
 Y = (57.5 * #Scale#)

;---------;
;PROCESSES;
;---------;

[ProcessName]
 Meter = String
 MeterStyle = FontStyle2
 X = (60 * #Scale#)
 Y = (57 * #Scale#)
 FontColor = #Color8#
 Text= Name(n)
 DynamicVariables=1

[ProcessUsage]
 Meter = String
 MeterStyle = FontStyle2
 X = (86 * #Scale#)
 Y = (57 * #Scale#)
 FontColor = #Color8#
 Text= CPU%(c)
 DynamicVariables=1

[Process1.txt]
 Meter = String
 MeasureName = Process1
 MeterStyle = FontStyle2
 X = (56 * #Scale#)
 Y = (60 * #Scale#)
 FontColor = #Color11#
 FontSize = 1
 InLineSetting= Size | (1.5 * #Scale#)
 ClipString = 1
 W = (15 * #Scale#)
 Text= 1. [Process1]
 DynamicVariables=1

[Process1Num]
 Meter = String
 MeasureName = Process1
 MeterStyle = FontStyle2
 X = (30 * #Scale#)r
 Y = (0 * #Scale#)r
 FontColor = #Color11#
 FontSize = 1
 InLineSetting= Size | (1.5 * #Scale#)
 ClipString = 1
 W = (7 * #Scale#)
 Text= [Process1:]
 DynamicVariables=1

[Process2.txt]
 Meter = String
 MeasureName = Process2
 MeterStyle = FontStyle2
 X = (56 * #Scale#)
 Y = (3 * #Scale#)r
 FontColor = #Color11#
 FontSize = 1
 InLineSetting= Size | (1.5 * #Scale#)
 ClipString = 1
 W = (15 * #Scale#)
 Text= 2. [Process2] 
 DynamicVariables=1

[Process2Num]
 Meter = String
 MeasureName = Process2
 MeterStyle = FontStyle2
 X = (30 * #Scale#)r
 Y = (0 * #Scale#)r
 FontColor = #Color11#
 FontSize = 1
 InLineSetting= Size | (1.5 * #Scale#)
 ClipString = 1
 W = (7 * #Scale#)
 Text= [Process2:]
 DynamicVariables=1

[Process3.txt]
 Meter = String
 MeasureName = Process3
 MeterStyle = FontStyle2
 X = (56 * #Scale#)
 Y = (3 * #Scale#)r
 FontColor = #Color11#
 FontSize = 1
 InLineSetting= Size | (1.5 * #Scale#)
 ClipString = 1
 W = (15 * #Scale#)
 Text= 3. [Process3]
 DynamicVariables=1

[Process3Num]
 Meter = String
 MeasureName = Process3
 MeterStyle = FontStyle2
 X = (30 * #Scale#)r
 Y = (0 * #Scale#)r
 FontColor = #Color11#
 FontSize = 1
 InLineSetting= Size | (1.5 * #Scale#)
 ClipString = 1
 W = (7 * #Scale#)
 Text= [Process3:]
 DynamicVariables=1

[Process4.txt]
 Meter = String
 MeasureName = Process4
 MeterStyle = FontStyle2
 X = (56 * #Scale#)
 Y = (3 * #Scale#)r
 FontColor = #Color11#
 FontSize = 1
 InLineSetting= Size | (1.5 * #Scale#)
 ClipString = 1
 W = (15 * #Scale#)
 Text= 4. [Process4]
 DynamicVariables=1

[Process4Num]
 Meter = String
 MeasureName = Process4
 MeterStyle = FontStyle2
 X = (30 * #Scale#)r
 Y = (0 * #Scale#)r
 FontColor = #Color11#
 FontSize = 1
 InLineSetting= Size | (1.5 * #Scale#)
 ClipString = 1
 W = (7 * #Scale#)
 Text= [Process4:]
 DynamicVariables=1

;----;
;TEMP;
;----;

[SensorHeading]
 Meter = String
 MeterStyle = FontStyle2
 FontColor = #Color8#
 X = (75 * #Scale#)
 Y = (31.5 * #Scale#)
 Text = Sensor(s)

[GPU.txt]
 Meter = String
 MeasureName = RunnyRun
 MeterStyle = FontStyle2
 X = (0.5 * #Scale#)r
 Y = (34.8 * #Scale#)
 Text = %1
 ToolTipText = %1
 W = (20 * #Scale#)
 ClipString = 1

[TemperatureHeading]
 Meter = String
 MeterStyle = FontStyle2
 FontColor = #Color8#
 X = (98.5 * #Scale#)
 Y = (31.5 * #Scale#)
 Text = Temp(t)

[Temperature.txt]
 Meter = String
 MeasureName = MeasureTemp
 MeterStyle = FontStyle2
 X = (1 * #Scale#)r
 Y = (34.8 * #Scale#)
 Text = %1[\x00B0]C

;----;
;DISK;
;----;

[DiskHeading]
 Meter = String
 MeterStyle = FontStyle2
 FontColor = #Color8#
 X = (75 * #Scale#)
 Y = (43.5 * #Scale#)
 Text = Disk(d)

[UsedHeading]
 Meter = String
 MeterStyle = FontStyle2
 FontColor = #Color8#
 X = (12 * #Scale#)r
 Y = (0 * #Scale#)r
 Text = Used(u)

[FreeHeading]
 Meter = String
 MeterStyle = FontStyle2
 FontColor = #Color8#
 X = (11.5 * #Scale#)r
 Y = (0 * #Scale#)r
 Text = Free(n)

[CDrive]
 Meter = String
 MeterStyle = FontStyle2
 X = (78 * #Scale#)
 Y = (3.5 * #Scale#)r
 Text = C:

[CUsed]
 Meter = String
 MeasureName = MeasureCUsedGB
 MeterStyle = FontStyle2
 X = (10 * #Scale#)r
 Y = (0 * #Scale#)r
 Text = %1GB

[CFree]
 Meter = String
 MeasureName = MeasureCFreeGB
 MeterStyle = FontStyle2
 X = (12 * #Scale#)r
 Y = (0 * #Scale#)r
 Text = %1GB