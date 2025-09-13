// Q37: Write a program to find the LCM of two numbers.
/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/ 

#include <stdio.h>   
int main() {
    int num1, num2, lcm, max;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    // LCM cannot be less than the greater numbernum2, lcm);
    max = (num1 > num2) ? num1 : num2;
    lcm = max; // Start checking from the maximum of the two numbers
    while (1) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            break; // Found the LCM
        }
        lcm++; // Increment to check the next number
    }
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);    
    return 0;
}