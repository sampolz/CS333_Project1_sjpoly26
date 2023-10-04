/**
 * Making a struct that uses an odd number of bytes
 *
 * Sam Polyakov
 * project1part4.c
 * 09/16/2023 
 */
#include <stdio.h>
#include <stdlib.h>

struct Struct{
    char c1; // 1 byte
    short s1; // 2 bytes
    char c2; // 1 byte
    short s2; // 2 bytes
    char c3; // 1 byte
};


int main(int arg, char *argv[]){
    // tests size of struct, short, and char
    // sees how the memory of the struct is laid out

    struct Struct testing = {'a',1,'b',2,'c'};
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of short: %zu bytes\n", sizeof(short));
    printf("Size of Struct: %zu bytes\n", sizeof(testing));

    unsigned char *ptr;

    ptr = (unsigned char *)&(testing);

    int j;
    for(j=0; j<sizeof(testing); j++) {
	    printf("%d: %02X\n", j, ptr[j]);
	}
}