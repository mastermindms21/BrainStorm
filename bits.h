#ifndef _BITS_H_
#define _BITS_H_
//  Bit manipulations implemented as arrays of boolean values

typedef enum {F=0,T=1} bit;


// This returns a T or F depending on the value of the input bit b
char bitval(bit b){
	if(b==F){
		return 'F';
	} else {
		return 'T';
	};
}



// Below are the bit operations
// NOT returns a new bit with its value as the opposite of the input bit 
bit NOT(bit b){
	bit o;
	if(b==F){
		o=T;
	} else {
		o=F;
	}
	return o;
}

// AND returns a new bit which if T if and only if both input bits are T
bit AND(bit b1, bit b2){
	bit out;
	if(b1 && b2){
		out=T;
	} else {
		out=F;
	};
	return out;
}

// OR returns a new bit whose value is T if either of the two input bits' values, or both are T
bit OR(bit b1, bit b2){
	bit out;
	if(b1==T){
		out=T;
		// Short circuit evaluation here
		// Since we may know the answer at this point we can return the output
		return out;
	} else if(b2==T){
		out=T;
		return out;
	} else {
		out=F;
		return out;
	};
}


// Since NAND is the inverse of AND, it can be written most concisely as below
bit NAND(bit b1, bit b2){
	bit out=NOT(AND(b1,b2));
	return out;
}

// Neither b1 NOR b2 can be true
bit NOR(bit b1, bit b2){
	bit out=NOT(OR(b1,b2));
	return out;
}


// Either b1 OR b2, but NOT both
bit XOR(bit b1, bit b2){
	bit out=AND(OR(b1,b2),NAND(b1,b2));
	return out;
}

bit XNOR(bit b1, bit b2){
	bit out;
	if(b1==b2){
		out=T;
	} else {
		out=F;
	};
	return out;
}


// Implication operator
bit IMPLIES(bit b1, bit b2){
	bit out;
	if(AND(b1, NOT(b2))){
		out=F;
	} else {
		out=T;
	};
	return out;
}


// Equality operator, Equivalence. Equivalent to XNOR
bit EQUAL(bit b1, bit b2){
	return XNOR(b1,b2);
}




typedef struct {
	bit b0:1;
	bit b1:1;
	bit b2:1;
	bit b3:1;
	bit b4:1;
	bit b5:1;
	bit b6:1;
	bit b7:1;
} byte;


byte makebyte(bit b0, bit b1, bit b2, bit b3, bit b4, bit b5, bit b6, bit b7){
	byte out;
	out.b0=b0;
	out.b1=b1;
	out.b2=b2;
	out.b3=b3;
	out.b4=b4;
	out.b5=b5;
	out.b6=b6;
	out.b7=b7;
	return out;
}



byte INCREMENT(byte in){
	byte out=in;
	if(out.b0==0){
		out.b0=1;
		return out;
	} else {
		out.b0=0;
	}
	if(out.b1==0){
		out.b1=1;
		return out;
	} else {
		out.b1=0;
	}
	if(out.b2==0){
		out.b2=1;
		return out;
	} else {
		out.b2=0;
	}
	if(out.b3==0){
		out.b3=1;
		return out;
	} else {
		out.b3=0;
	}
	if(out.b4==0){
		out.b4=1;
		return out;
	} else {
		out.b4=0;
	}
	if(out.b5==0){
		out.b5=1;
		return out;
	} else {
		out.b5=0;
	}
	if(out.b6==0){
		out.b6=1;
		return out;
	} else {
		out.b6=0;
	}
	if(out.b7==0){
		out.b7=1;
		return out;
	}
}




#endif