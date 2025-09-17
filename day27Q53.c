    /* Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/ 

#include <stdio.h>
int main() {
    int blocks[] = {1, 3, 5, 7, 9, 7, 5, 3, 1}; // number of stars in each block
    int n = 9; // total number of blocks

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < blocks[i]; j++) {
            printf("*");
        }
        printf("\n"); // new line after each block
    }

    return 0;
}