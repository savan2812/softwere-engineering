//23. C Program to Reverse a Number Using FOR Loop
#include <stdio.h>
int main()
{	
	int num,rem, rev;
	
	printf("Enter the number :");
	scanf("%d",&num);
	int copy = num;
	
	for(;num != 0;)
	{
		rem = num%10;
		rev = (rev*10)+rem;
		num = num/10;
	}
	printf("Reverse number = %d",rev);
	
	return 0;
}

