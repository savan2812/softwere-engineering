/*17. Write a C program to check whether a triangle can be formed with the given values for the angles.*/

#include<stdio.h>
int main()
{
	int angle1 , angle2 , angle3,sum;
	
	printf("Enter the First angle:");
	scanf("%d",&angle1);
	
	printf("Enter the second angle:");
	scanf("%d",&angle2);
	
	printf("Enter the third angle:");
	scanf("%d",&angle3);
	
	sum = angle1 + angle2 + angle3;
	
	if(sum == 180)
	{
		printf("The value u have entered will form a triangle");
	}
	else
	{
		printf("The value u have entered will not form a triangle");
	}
}

