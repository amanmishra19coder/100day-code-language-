/*Q40: Write a program to find the 1’s complement of a binary number and print it.


Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>

int main() {
    long long num, temp, rev = 0, complement = 0;
    int digit;

    printf("Enter a binary number: ");
    scanf("%lld", &num);

    temp = num;

    // Step 1: Build complemented number in reverse
    while (temp > 0) {
        digit = temp % 10;     // extract last binary digit

        if (digit == 1)
            rev = rev * 10 + 0;
        else
            rev = rev * 10 + 1;

        temp /= 10;
    }

    // Step 2: Reverse it again to get correct order
    while (rev > 0) {
        complement = complement * 10 + (rev % 10);
        rev /= 10;
    }

    printf("1's Complement: %lld\n", complement);

    return 0;
}
