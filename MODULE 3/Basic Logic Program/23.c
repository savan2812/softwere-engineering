//23. WAP to calculate swap 2 numbers with using of multiplication and division.
#include <stdio.h>
int main() 
{
    int a, b;

    printf("\nEnter two numbers:");
    printf("Number 1: ");
    scanf("%d", &a);
    printf("\nEnter two numbers:");
    printf("Number 2: ");
    scanf("%d", &b);

    if (b != 0)
	 {
        a = a * b; 
        b = a / b; 
        a = a / b;

        printf("\nAfter swapping: Number 1 = %d, Number 2 = %d", a, b);
    } 
	else 
	{
        printf("\nCannot swap: Division by zero is not allowed.");
    }

    return 0;
}

