//22. Accept 3 numbers from user using while loop and check each numbers palindrome
#include <stdio.h>
int main()
{	
	int rev,rem,num,copy1,i=1;
	
	while(i<=3)
	{ 
		printf("\nEnter the number :");
		scanf("%d",&num);
		copy1 = num;	
	
		rev = 0;
	while(num!=0)
	{
		rem = num % 10;
		rev = (rev*10)+rem;
		num = num/10;
	}
	
	if(copy1 == rev)
	{
		printf("\n%d is the pallindrome number", copy1);
	}
	else
	{
		printf("\n%d is not the pallindrome number",copy1);
	}
		i++;
	}
	return 0;
}

