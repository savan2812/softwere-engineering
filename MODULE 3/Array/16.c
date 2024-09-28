//16 Accept 5 numbers from user and perform sum of array
#include<stdio.h>
int main()
{
	int num[100],size,sum = 0,i;
	for(i=0;i<5;i++)
	{
		printf("\nEnter the element in num[%d] = ",i);
		scanf("%d",&num[i]);	
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",num[i]);
	}
	
	for(i=0;i<5;i++)
	{
		sum = sum + num[i];
	}
	
	printf("\nAddition of elements is %d",sum);
    return 0;
}
