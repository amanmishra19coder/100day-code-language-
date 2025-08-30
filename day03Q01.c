//Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Enter the tempreture in celcius : ");
    scanf("%f",&celsius );
fahrenheit = (celsius * 9/5 +32);
 printf("Temperature in Fahrenheit: %.f\n", fahrenheit);
}