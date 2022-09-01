#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BrainStorm.h"




int main(){
	for(int i=0; i<128; i=AddIntegers(i, 1)){
		printf("%c=%d, %d, %d, %d, %d, %d, %d, %d, %d\n", i, is_upper(i), is_lower(i), is_alpha(i), is_digit(i), is_xdigit(i), is_alnum(i), is_cntrl(i), is_space(i), is_punct(i));
	}
	char *s1="This is tHe tEsT StRINg";
	
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