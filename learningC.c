#include <stdio.h>
#include <stdlib.h>

int main(int args, char *argv[]){
    int *ptr; // here, star means type
    int a = 5;

    ptr = &a;

    // here star means follow the pointer and accses what is at the end of it
    printf("a is %d and ptr points to %d\n", a , *ptr);
    printf("ptr has the value %p\n", ptr);
    printf("ptr is at address %p on the stack\n", &ptr);

    // dereference means go to the end of the arrow and look at the contents of memory there
    ptr = malloc(sizeof(int));
    *ptr = 6;
    printf("a is %d and ptr points to %d\n", a , *ptr);
    printf("ptr has the value %p\n", ptr);

    //create a memory leak
    ptr = &a;

    ptr = malloc( sizeof(int));
    *ptr = 7;
    free(ptr); // this time freeing the memory first


    printf("a is %d and ptr points to %d\n",a,*ptr);

    ptr = malloc(sizeof(int));
    *ptr = 7;
    printf("a is %d and ptr points to %d\n",a,*ptr);
    printf("ptr has the value %p\n", ptr);
}