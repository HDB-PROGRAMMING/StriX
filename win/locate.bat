@echo off
cd ..
mkdir C:\msys64\usr\include\StriX
xcopy src\* C:\msys64\usr\include\StriX
mkdir C:\msys64\usr\include\StriX\structs
xcopy src\structs\* C:\msys64\usr\include\StriX\structs
mkdir C:\msys64\usr\include\StriX\libs
xcopy src\libs\* C:\msys64\usr\include\StriX\libs
mkdir C:\msys64\usr\include\StriX\funcs
xcopy src\funcs\* C:\msys64\usr\include\StriX\funcs
mkdir C:\msys64\usr\include\StriX\consts
xcopy src\consts\* C:\msys64\usr\include\StriX\consts
exit