[SildeShow]
 Measure = Plugin
 Plugin = QuotePlugin
 PathName = #@#Images/
 UpdateDivider = 150

;----------------------------------;
;              VIS                 ; 
;----------------------------------;


[MeasureAudio]
 Measure = Plugin
 Plugin = AudioLevel
 Port = Output
 FFTSize = 1024
 FFTAttack = 75
 FFTDecay = 1100
 Bands = 15

[Band0]
 Measure = Plugin
 Plugin = AudioLevel
 Parent = MeasureAudio
 Type = Band
 BandIdx = 0
 AverageSize=#AverageSize#

[Band1]
 Measure = Plugin
 Plugin = AudioLevel
 Parent = MeasureAudio
 Type = Band
 BandIdx = 1
 AverageSize=#AverageSize#

[Band2]
 Measure = Plugin
 Plugin = AudioLevel
 Parent = MeasureAudio
 Type = Band
 BandIdx = 2
 AverageSize=#AverageSize#

[Band3]
 Measure = Plugin
 Plugin = AudioLevel
 Parent = MeasureAudio
 Type = Band
 BandIdx = 3
 AverageSize=#AverageSize#

[Band4]
 Measure = Plugin
 Plugin = AudioLevel
 Parent = MeasureAudio
 Type = Band
 BandIdx = 4
 AverageSize=#AverageSize#

[Band5]
 Measure = Plugin
 Plugin = AudioLevel
 Parent = MeasureAudio
 Type = Band
 BandIdx = 5
 AverageSize=#AverageSize#

[Band6]
 Measure = Plugin
 Plugin = AudioLevel
 Parent = MeasureAudio
 Type = Band
 BandIdx = 6
 AverageSize=#AverageSize#

[Band7]
 Measure = Plugin
 Plugin = AudioLevel
 Parent = MeasureAudio
 Type = Band
 BandIdx = 7
 AverageSize=#AverageSize#

[Band8]
 Measure = Plugin
 Plugin = AudioLevel
 Parent = MeasureAudio
 Type = Band
 BandIdx = 8
 AverageSize=#AverageSize#

[Band9]
 Measure = Plugin
 Plugin = AudioLevel
 Parent = MeasureAudio
 Type = Band
 BandIdx = 9
 AverageSize=#AverageSize#

[Band10]
 Measure = Plugin
 Plugin = AudioLevel
 Parent = MeasureAudio
 Type = Band
 BandIdx = 10
 AverageSize=#AverageSize#

[Band11]
 Measure = Plugin
 Plugin = AudioLevel
 Parent = MeasureAudio
 Type = Band
 BandIdx = 11
 AverageSize=#AverageSize#

[Band12]
 Measure = Plugin
 Plugin = AudioLevel
 Parent = MeasureAudio
 Type = Band
 BandIdx = 12
 AverageSize=#AverageSize#

[Band13]
 Measure = Plugin
 Plugin = AudioLevel
 Parent = MeasureAudio
 Type = Band
 BandIdx = 13
 AverageSize=#AverageSize#

[Band14]
 Measure = Plugin
 Plugin = AudioLevel
 Parent = MeasureAudio
 Type = Band
 BandIdx = 14
 AverageSize=#AverageSize#