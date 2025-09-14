/* Q50: Write a program to print the following pattern:
*****
  ****
    ***
      **
        *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
  ****
    ***
      **
        *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/

#include <stdio.h>
int main() {
    int i, j, k, n=5;
    for(i=1; i<=n; i++) {
        for(k=1; k<i; k++) {
            printf("  ");
        }
        for(j=i; j<=n; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}