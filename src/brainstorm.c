#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BrainStorm.h"








int main(int argc, char **argv){
	char *s1="This is tHe tEsT StRINg";
	init();
	printf("%s\n", s1);
	for(int i=0;i<strlen(s1);i++){
		putchar(to_lower(s1[i]));
	}
	putchar(10);
	for(int i=0;i<strlen(s1);i++){
		putchar(to_upper(s1[i]));
	}
	
	
	return 0;
}





