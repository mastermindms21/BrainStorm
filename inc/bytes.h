






int is_upper(int c){
	if(c>=65 && c<=90){
		return 1;
	} else {
		return 0;
	};
}



int is_lower(int c){
	if(c>=97 && c<=122){
		return 1;
	} else {
		return 0;
	};
}





int is_alpha(int c){
	if(is_upper(c) || is_lower(c)){
		return 1;
	} else {
		return 0;
	};
}





int is_digit(int c){
	if(c>=48 && c<=57){
		return 1;
	} else {
		return 0;
	};
}

int is_xdigit(int c){
	if((c>=48 && c<=57) || (c>=65 && c<=70) || (c>=97 && c<=102)){
		return 1;
	} else {
		return 0;
	};
}




int is_alnum(int c){
	if(is_alpha(c) || is_digit(c)){
		return 1;
	} else {
		return 0;
	};
}




int is_cntrl(int c){
	if((c>=0 && c<=31) || c==127){
		return 1;
	} else {
		return 0;
	};
}



int is_space(int c){
	if((c>=9 && c<=13) || c==32){
		return 1;
	} else {
		return 0;
	};
}



int is_punct(int c){
	if((c>=33 && c<=47) || (c>=58 && c<=64) || (c>=91 && c<=96) || (c>=123 && c<=126)){
		return 1;
	} else {
		return 0;
	};
}


int is_blank(int c){
	if((c==9) || c==32){
		return 1;
	} else {
		return 0;
	};
}


int is_graph(int c){
	if((c>=33) && c<=126){
		return 1;
	} else {
		return 0;
	};
}


int is_print(int c){
	if((c>=32) && c<=126){
		return 1;
	} else {
		return 0;
	};
}

int to_lower(int c){
	if(is_upper(c)){
		return c+32;
	} else {
		return c;
	}
}



int to_upper(int c){
	if(is_lower(c)){
		return c-32;
	} else {
		return c;
	}
}





