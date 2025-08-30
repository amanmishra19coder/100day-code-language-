//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#include <math.h>
// pi = 3.14

int main() {
    float radius;
    printf("enter the radius of circle ");
    scanf("%f", &radius);
    printf("Area: %f\n", 3.14*radius * radius );
    printf("Circumference : %f\n", 2 * 3.14 * radius );
}
