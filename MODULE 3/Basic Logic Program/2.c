//2. Write a program to make Simple calculator (to make addition, subtraction,multiplication, division and modulo)
#include<stdio.h>
#include<math.h>
int main()
{
	int num1,num2,choice;
	
	printf("\n1.Addition");
	printf("\n2.subtraction");
	printf("\n3.Multiplication");
	printf("\n4.Division");
	printf("\n5.Remainder");
	printf("\nEnter your choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe addition of %d and %d is %d",num1,num2,num1+num2);
		break;
		case 2 :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe subtraction of %d and %d is %d",num1,num2,num1-num2);
		break;
		case 3 :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe multiplication of %d and %d is %d",num1,num2,num1*num2);
		break;
		case 4 :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe division of %d and %d is %.2f",num1,num2,(float)num1/(float)num2);
		break;
		case 5 :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe remainder of %d and %d is %d",num1,num2,num1%num2);
		break;
		default : printf("\nInvalid input!");
	}
	
	return 0;
}
