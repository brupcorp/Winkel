
del /s /A:-R-H-S *.~* 
del /s /A:-H-R-S *.obj 
del /s /A:-H-R-S *.tds 
del /s /A:-H-R-S *Project1.exe

del Debug/*.* /S /Q /E
rmdir Debug /S /Q /E 
del __history/*.* /S /Q /E
rmdir __history /S /Q /E
 

: /E = Empty (auch leere unterordner)
: /Q = Quiet (nix sagen)
: /p = Nachfragen
: /S = unterordner mit durchsuchen, l�schen
: /A: = Attribute
: -H = (keine) Versteckten
: -R = (keine) Schreibgesch�tzten
: -S = (keine) Systemdateien
: -A = (keine) Archive

rem pause