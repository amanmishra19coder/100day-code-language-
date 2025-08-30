//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main ( ){
    int n,sum ;
    printf("enter number  :  ");
    scanf("%d", &n);
    for (int i = 1 ; i <= n; i++){
        sum = sum + i;

    }
    printf("sum of first %d natural number is %d \n ",n, sum );
}