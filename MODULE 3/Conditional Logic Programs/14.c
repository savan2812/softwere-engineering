//14.WAP to find the largest of three numbers 
#include <stdio.h>
int main()
{
	int num1, num2, num3;
	
	printf("\nEnter the first number =");
	scanf("%d",&num1);
	
	printf("\nEnter the second number =");
	scanf("%d",&num2);
	
	printf("\nEnter the third number =");
	scanf("%d",&num3);
	
	if(num1>num2 && num1>num3){
		printf("First number is the largest number.");
	}else if(num2>num1 && num2>num3){
		printf("Second number is the largest number.");
	}else{
		printf("Third number is the largest number.");
	}

	return 0;
}

