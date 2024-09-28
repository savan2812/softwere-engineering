//10.WAP to check whether a number is negative, positive or zero.
#include<stdio.h>

int main() 
{
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    if (num > 0) 
	{
        printf("\nThe number %.2f is Positive", num);
    }
	else if (num < 0) 
	{
        printf("\nThe number %.2f is Negative", num);
    }
	else 
	{
        printf("\nThe number is Zero");
    }

    return 0;
}

