//15.Calculate sum of 10 numbers using of while loop 
#include <stdio.h>
int main()
 {
    int number,sum=0,count=0;

    printf("\nEnter 10 numbers:\n");

    while (count < 10) 
	{
        printf("Number %d: ", count + 1);
        scanf("%d", &number);
        sum += number; 
        count++; 
    }

    printf("\nThe sum of the 10 numbers is: %d",sum);

    return 0;
}

