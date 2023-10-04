/**
 * Making a struct that uses an odd number of bytes
 *
 * Sam Polyakov
 * project1part5a.c
 * 09/16/2023 
 */

#include <stdio.h>
#include <string.h>

int main() {
    char buffer[5]; 
    int decision = 0;

    strcpy(buffer, "123456");

    if (decision == 0) {
        printf("safe\n");
    } else {
        printf("hacked\n");
    }

}
