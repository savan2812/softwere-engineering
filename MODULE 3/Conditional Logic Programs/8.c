//8. WAP to accept the height of a person in centimeters and categorize the person according to their height.
#include <stdio.h>

int main() 
{
    float height;

    printf("Enter your height in centimeters: ");
    scanf("%f", &height);

    if (height < 150.0) 
	{
        printf("\nYou are categorized as Short");
    }
	 else if (height >= 150.0 && height <= 180.0) 
	{
        printf("\nYou are categorized as Average height");
    } 
	else 
	{
        printf("\nYou are categorized as Tall");
    }

    return 0;
}

