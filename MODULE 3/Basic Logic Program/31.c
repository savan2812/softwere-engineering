//31. Convert kilometers into meters
#include <stdio.h>
int main() 
{
    float kilometers,meters;

    printf("Enter the number of kilometers: ");
    scanf("%f", &kilometers);

    meters = kilometers * 1000;  

    printf("\n%.2f kilometers is equivalent to %.2f meters.", kilometers, meters);

    return 0;
}
