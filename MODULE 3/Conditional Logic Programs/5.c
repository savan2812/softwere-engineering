//5.Check Number Is Positive or Negative
#include <stdio.h>

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) 
	{
        printf("\n%d is a positive number", num);
    }
	else if (num < 0) 
	{
        printf("\n%d is a negative number", num);
    }
	else 
	{
        printf("\nThe number is zero");
    }

    return 0;
}

