@echo off
cd ..
nul > tmp.h
echo #include "src/StriX.h" > tmp.h
g++ -Wall -Wextra -O -ansi -pedantic -fPIC -shared tmp.h -o StriX.dll
del tmp.h
exit