#include <stdio.h>
#include <stdlib.h>
#include "bits.h"





int main(int argc, char **argv){
	byte b;
	b=make_byte(0,0,0,0,0,0,0,0);
	for(int i=0;i<256;i++){
		printf("%d, %c, %s\n", i, b, char2byte(i));
		b=INCREMENT(b);
	}
	
	
	
	return 0;
}





