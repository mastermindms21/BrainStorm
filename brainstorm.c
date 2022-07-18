#include <stdio.h>
#include "bits.h"





int main(int argc, char **argv){
	byte b1=makebyte(0,0,0,0,0,0,0,0);
	printf(" %c\n", b1);
	b1=INCREMENT(b1);
	for(int i=0;i<275;i++){
		printf(" %c\n", b1);
		b1=INCREMENT(b1);
	};
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}


















