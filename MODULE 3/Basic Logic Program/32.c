//32. Accept 2 numbers and find out its sum check it size 
#include <stdio.h>
int main()
{
	int num1,num2,sum=0;
	
	printf("\nEnter the first value:");
	scanf("%d",&num1);
	
	printf("\nEnter the second value:");
	scanf("%d",&num2);
	
	sum = num1 + num2;
	
	printf("\nThe sum of Num1 and Num2 is = %d ",sum);
	
	printf("\nThe size of sum is =%d ",sizeof(sum));
	
	return 0;
}

