//1. Write a C program to accept two integers and check whether they are equal or not
#include<stdio.h>

int main()
 {
    int num1, num2;
   
    printf("Enter the integers: ");
    scanf("%d", &num1);
	printf("Enter the integers: ");
    scanf("%d", &num2);
    if (num1 == num2) 
	{
        printf("\nThe numbers are equal");
    }
	
	 else 
	{
        printf("\nThe numbers are not equal");
    }

    return 0;
}

