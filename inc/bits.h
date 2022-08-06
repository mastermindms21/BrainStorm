#ifndef _BITS_H_
#define _BITS_H_
///  Bit manipulations implemented as arrays of boolean values


/// Basic bit type, can be either F (0), or T (1)
typedef enum {F=0,T=1} bit;

/// Basic byte type, consists of exactly 8 bits
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


/// This returns a T or F depending on the value of the input bit b
char bitval(bit b);
/// Below are the bit operations
/// NOT returns a new bit with its value as the opposite of the input bit 
bit NOT(bit b);
/// AND returns a new bit which if T if and only if both input bits are T
bit AND(bit b1, bit b2);
/// OR returns a new bit whose value is T if either of the two input bits' values, or both are T
bit OR(bit b1, bit b2);
/// Since NAND is the inverse of AND, it can be written most concisely as below
bit NAND(bit b1, bit b2);
/// Neither b1 NOR b2 can be true
bit NOR(bit b1, bit b2);

/// Either b1 OR b2, but NOT both
bit XOR(bit b1, bit b2);
bit XNOR(bit b1, bit b2);
/// Implication operator
bit IMPLIES(bit b1, bit b2);

/// Equality operator, Equivalence. Equivalent to XNOR
bit EQUAL(bit b1, bit b2);

byte make_byte(bit b0, bit b1, bit b2, bit b3, bit b4, bit b5, bit b6, bit b7);

byte *to_byte(char c);

byte INCREMENT(byte in);







#endif

