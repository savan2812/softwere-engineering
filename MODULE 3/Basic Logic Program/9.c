//9. Find circumference of Triangle formula : triangle = a + b + c
#include <stdio.h>
int main() 
{
    float sideA, sideB, sideC, circumference;

    printf("Enter the length of side A: ");
    scanf("%f", &sideA);
    
    printf("Enter the length of side B: ");
    scanf("%f", &sideB);
    
    printf("Enter the length of side C: ");
    scanf("%f", &sideC);

    circumference = sideA + sideB + sideC; 

    printf("Circumference of the triangle: %.2f\n", circumference);

    return 0;
}
