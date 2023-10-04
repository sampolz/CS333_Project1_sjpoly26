/**
 * Seeing what will happen w/ memory overflow
 *
 * Sam Polyakov
 * project1part3.c
 * 09/16/2023 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int arg, char *argv[]){
    char *ptr; // single variable to point to memory

    while(1){
        // repeatedly allocates a small amount of memory
        ptr = (char *)malloc(1024 * 1024);

        free(ptr);
    }

}