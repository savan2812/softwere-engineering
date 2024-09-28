//13.calculate the Factorial of a Given Number using while loop 
#include <stdio.h>
int main()
 {
    int number,factorial=1;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) 
	{
        printf("\nFactorial is not defined for negative numbers.");
    } 
	else 
	{
        int i = 1;
        while (i <= number)
		 {
            factorial *= i; 
            i++; 
        }

        printf("\nFactorial of %d = %d", number, factorial);
    }

    return 0;
}

