// Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder, originalNum;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if the original number is equal to the reversed number
    if (originalNum == reversedNum) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}