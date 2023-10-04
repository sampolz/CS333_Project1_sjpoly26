/**
 * Seeing what happens when you assign a pointer to itself
 *
 * Sam Polyakov
 * project1part2.c
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
    ptr = (unsigned char *)&(ptr);  
    printf("Memory of ptr:\n");         
    for(j=0; j<100; j++) {
	    printf("%d: %02X\n", j, ptr[j]);
	}

}  