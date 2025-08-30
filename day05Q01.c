//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h> 
#include <math.h>

int main(){
  float principle ,interest , rate , time;
  printf("Enter principle amount: ");

  scanf("%f", &principle);
  printf("Enter rate of interest: ");
  scanf("%f", &rate);
  printf("Enter time (in years): ");
  scanf("%f", &time);
  // Calculate simple interest
  interest = (principle * rate * time) / 100;
  printf("Simple Interest = %.2f\n", interest);
  // Calculate compound interest
  float compound_interest = principle * pow((1 + rate / 100), time) - principle;
  printf("Compound Interest = %.2f\n", compound_interest);
  return 0;
}
