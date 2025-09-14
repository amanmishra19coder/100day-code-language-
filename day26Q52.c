/* Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*




Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main() {
    int blocks[] = {1, 3, 5, 3, 1}; // number of stars in each block
    int n = 5; // total number of blocks

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < blocks[i]; j++) {
            printf("*\n");
        }
        printf("\n"); // blank line between blocks
    }

    return 0;
}
