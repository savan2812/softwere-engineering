//14.Accept 5 numbers from user and find those numbers factorials 
#include <stdio.h>
int main()
 {
    int numbers[5],factorial,j,i;
    
    for (j = 0; j < 5; j++) 
	{
        printf("Enter number %d: ", j + 1);
        scanf("%d", &numbers[j]);
    }

    for (j = 0; j < 5; j++) 
	{
        int number = numbers[j];
        factorial = 1;

        if (number < 0) 
		{
            printf("\nFactorial is not defined for negative numbers: %d", number);
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
    }

    return 0;
}

