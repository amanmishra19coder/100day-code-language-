//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>
int main(){
    int seconds ,minutes ,hours ;
 printf("enter the time in seconds :  "); 
 scanf("%d", &seconds);
   hours = seconds /3600; 
   minutes = (seconds % 3600) /60 ; 
   seconds = (seconds % 60);

   printf("time in hours : minutes : seconds  = %d : %d : %d ", hours, minutes, seconds);
}