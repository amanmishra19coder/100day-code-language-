/*  Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *



Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/ 
#include <stdio.h>
int main() {
    int blocks[] = {1, 3, 5, 7, 5 , 3, 1}; // number of stars in each block
    int spaces[] = {3, 2, 1, 0, 1, 2, 3}; // leading spaces for each block
    int n = 7; // total number of blocks        
    for (int i = 0; i < n; i++) {
        for (int s = 0; s < spaces[i]; s++) {
            printf(" "); // print leading spaces
        }
        for (int j = 0; j < blocks[i]; j++) {
            printf("*");
        }
        printf("\n"); // new line after each block
    }
    return 0;
}