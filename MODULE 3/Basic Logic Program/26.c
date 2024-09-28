//26.Convert temperature Fahrenheit to Celsius 
#include <stdio.h>
main() 
{
    float fah, cel;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&fah);

    
    cel = (fah - 32) * 5 / 9;

    printf("\nTemperature in Celsius: %.2f ", cel);
	return 0;
}

