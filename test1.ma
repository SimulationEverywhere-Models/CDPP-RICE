[top] 
components : factory@Generator 
components : diffusion
components : field
link : out@factory  in@diffusion
link : out@diffusion in@field
select : factory diffusion field 

[factory]
distribution : normal
mean : 2
deviation : 1
 
[diffusion] 
type : cell 
dim : (6 ,8) 
delay : inertial
defaultDelayTime  : 100 
border :  nowrapped
neighbors : diffusion(-1,-1)  diffusion(-1,0)  diffusion(-1,1)  
neighbors : diffusion(0,-1)   diffusion(0,0)   diffusion(0,1)
initialValue : 0
initialrowvalue :  0     888888
initialrowvalue :  1     811008
initialrowvalue :  2     800008
initialrowvalue :  3     810008
initialrowvalue :  4     800008
initialrowvalue :  5     800008
initialrowvalue :  6     800008
initialrowvalue  : 7    888888
in : in 
out : out
link : in in@diffusion(1,4)
link : output@diffusion(4,1)  out
localtransition : diffusion-rule 
portInTransiton : in@diffusion(1,4)  chemicalIn-rule
zone : chemicalOut-rule  { (4,1) }



