M104 T1 S240.000000
M109 T0 S240.000000
M109 T1 S240.000000
;This code is added because forgot to retract
G92 E0			; Z3D Retract current filament
G1 E-5 F10000
G92 E0
G1 E2 F10000
G92 E0
G1 E-117 F10000
G92 E0
G4 P700 ; Z3D Wait before servo is called
