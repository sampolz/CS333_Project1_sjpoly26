/**
 * Seeing how different data types are stored in memory
 *
 * Sam Polyakov
 * project1part1.c
 * 09/16/2023 
 */

#include <stdio.h>
#include <stdlib.h>
        
int main (int arg, char *argv[]) {				
    // declaring variables of basic types
    char c = 'c';
    short s = 0x1234;
    int i = 0x01234567;
    long l = 0x0123456789ABCDEF;
    float f = 12.34;
    double d = 12.3456789;

    unsigned char *ptr; // unsigned char pointer

    int j; // loop variable

    // memory of char
    ptr = (unsigned char *)&(c);  
    printf("Memory of char:\n");         
    for(j=0; j<sizeof(char); j++) {
	    printf("%d: %02X\n", j, ptr[j]);
	}

    // memory of short
    ptr = (unsigned char *)&(s);
    printf("Memory of short:\n"); 
    for(j=0; j<sizeof(short); j++) {
	    printf("%d: %02X\n", j, ptr[j]);
	}

    // memory of int
    ptr = (unsigned char *)&(i);
    printf("Memory of int:\n"); 
    for(j=0; j<sizeof(int); j++) {
	    printf("%d: %02X\n", j, ptr[j]);
	}

    // memory of long
    ptr = (unsigned char *)&(l);
    printf("Memory of long:\n"); 
    for(j=0; j<sizeof(long); j++) {
	    printf("%d: %02X\n", j, ptr[j]);
	}

    // memory of float
    ptr = (unsigned char *)&(f);
    printf("Memory of float:\n"); 
    for(j=0; j<sizeof(float); j++) {
	    printf("%d: %02X\n", j, ptr[j]);
	}

    // memory of double
    ptr = (unsigned char *)&(d);
    printf("Memory of double:\n"); 
    for(j=0; j<sizeof(d); j++) {
	    printf("%d: %02X\n", j, ptr[j]);
	}
}  


// little endian:
// for a given number, the byte representing the most significant part of the number is last
// the byte representing the least significant part of the number is first (in memory)

// arrays are just pointers to the same type stored sequentially 