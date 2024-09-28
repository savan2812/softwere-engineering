/*18. Write a C program to calculate profit and loss on a transaction.*/

#include<stdio.h>
int main()
{	
	int cp,sp,profit,loss;
	
	printf("Enter the cost Price:");
	scanf("%d",&cp);
	
	printf("Enter the Selling Price");
	scanf("%d",&sp);
	
	profit = sp - cp;
	loss = cp - sp;
	
	if(profit <loss)
	{
		printf(" The amount of Loss is = %d rupees",loss);
	}
	else
	{
		printf(" The amount of Profit is = %d rupees",profit);
	}
	
	return 0;
}

