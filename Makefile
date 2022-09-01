




all: 
	gcc -I ./inc src/BrainStorm.c -o bs.exe
	gcc -I ./inc tests/testbytes.c -o testbytes.exe
	



