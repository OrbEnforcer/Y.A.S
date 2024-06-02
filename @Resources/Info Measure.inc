[MeasureCPUAVG]
 Measure = CPU
 Processor = 0
 UpdateDivider= 100 

[MeasureCPU1]
 Measure = CPU
 Processor = 1
 UpdateDivider= 100 

[MeasureCPU2]
 Measure = CPU
 Processor = 2
 UpdateDivider= 100 

[MeasureCPU3]
 Measure = CPU
 Processor = 3
 UpdateDivider= 100 

[MeasureCPU4]
 Measure = CPU
 Processor = 4
 UpdateDivider= 100 

[MeasureMemory]
 Measure = PhysicalMemory
 Total = 0

[MeasureSwapMemory]
 Measure = SwapMemory
 Total = 0

[MeasureDownload]
 Measure=NetIn

[MeasureUpload]
 Measure=NetOut

[Process1]
 Measure = Plugin
 Plugin = UsageMonitor
 Alias = CPU
 Index = 1

[Process2]
 Measure = Plugin
 Plugin = UsageMonitor
 Alias = CPU
 Index = 2

[Process3]
 Measure = Plugin
 Plugin = UsageMonitor
 Alias = CPU
 Index = 3

[Process4]
 Measure = Plugin
 Plugin = UsageMonitor
 Alias = CPU
 Index = 4

[MeasureTemp]
 Measure = Plugin
 Plugin = CoreTemp
 CoreTempType = MaxTemperature

[RunnyRun]
Measure=Plugin
Plugin=RunCommand
Parameter=powershell (Get-CimInstance win32_VideoController).VideoProcessor
OutputType=UTF8

[MeasureCUsed]
 Measure = FreeDiskSpace
 Drive = C:
 InvertMeasure = 1

[MeasureCFree]
 Measure = FreeDiskSpace
 Drive = C:

[MeasureCUsedGB]
 measure = Calc
 dynamicVariables = 1
 formula = ([MeasureCUsed]/1000000000)

[MeasureCFreeGB]
 measure = Calc
 dynamicVariables = 1
 formula = ([MeasureCFree]/1000000000)

[MeasureDUsed]
 Measure = FreeDiskSpace
 Drive = D:
 InvertMeasure = 1

[MeasureDFree]
 Measure = FreeDiskSpace
 Drive = D:

[MeasureDUsedGB]
 measure = Calc
 dynamicVariables = 1
 formula = ([MeasureDUsed]/1000000000)

[MeasureDFreeGB]
 measure = Calc
 dynamicVariables = 1
 formula = ([MeasureDFree]/1000000000)