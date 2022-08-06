@echo off
@echo Building...
gcc -I./inc src/bits.c src/brainstorm.c -o bs.exe
bs
pause


