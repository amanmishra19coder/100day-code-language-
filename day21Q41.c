/* Q41: Write a program to swap the first and last digit of a number.


Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
  #include <stdio.h>  
  #include <math.h>

  int main (){ 
    int n, first_digit, last_digit, num_digits, middle_part, swapped_num;
    printf("Enter a number: ");
    scanf("%d", &n);

    last_digit = n % 10; // Extract last digit
    num_digits = (int)log10(n); // Find number of digits - 1
    first_digit = n / (int)pow(10, num_digits); // Extract first digit

    if(num_digits == 0) { // If there's only one digit
        swapped_num = n; // No change needed
    } else {
        middle_part = (n % (int)pow(10, num_digits)) / 10; // Extract middle part
        swapped_num = last_digit * (int)pow(10, num_digits) + middle_part * 10 + first_digit; // Form new number
    }

    printf("Number after swapping first and last digit: %d\n", swapped_num);
    return 0;
  }
  