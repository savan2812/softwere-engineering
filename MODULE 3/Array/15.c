//15 Store 5 numbers in array and sort it in ascending order

#include<stdio.h>
int main()
{
	int num[100],i,j;
	for(i=0;i<5;i++)
	{
		printf("\nEnter the element in num[%d] = ",i);
		scanf("%d",&num[i]);
	}
	printf("\nArray = ");
	for(i=0;i<5;i++)
	{
		printf("%d ",num[i]);
	}
	printf("\nAscending order array = "); 	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(num[i]>num[j])
			{
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",num[i]);
	}
	return 0;
}
