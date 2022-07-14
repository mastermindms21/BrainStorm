#ifndef _BITS_H_
#define _BITS_H_
//  Bit manipulations implemented as arrays of boolean values

typedef enum {F=0,T=1} bit;

typedef struct {
	bit b0;
	bit b1;
	bit b2;
	bit b3;
	bit b4;
	bit b5;
	bit b6;
	bit b7;
} byte;




// This returns a T or F depending on the value of the input bit b
char bval(bit b){
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



// Inequality operator
bit NOTEQUAL(bit b1, bit b2){
	bit out;
	if(b1==b2){
		out=F;
	} else {
		out=T;
	};
	return out;
}








#endif