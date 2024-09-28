//5. WAP to take two Array input from user and sort them in ascending or
//   descending order as per user?s choice
#include <stdio.h>
int main()
{
	
	int num[100],i,j,size,choice;
	
	printf("Enter the size:");
	scanf("%d",&size);
	
	for(i=0 ; i<size ; i++)
	{
		printf("Enter the element in num[%d]",i);
		scanf("%d",&num[i]);
	}
	
	printf("\nNumbers:\n");
	for(i=0 ; i<size ; i++)
	{
		printf(" %d\t\n",num[i]);
	}
	
	printf("Choose 1 for Ascending order and 0 for descending order:\n");
	scanf("%d",&choice);
	
	if(choice == 1)
	{
		printf("\n In Ascending order =\n");
		for(i=0 ; i<size ; i++)
		{
			for(j=i+1 ; j<size ; j++)
			{
				if(num[i]>num[j])
				{
					int temp = num[i];
					num[i] = num[j];
					num[j] = temp;
				}
			}
		
			printf("%d\n",num[i]);
		}
	}
	else
	{
	
		printf("\n In descending order =\n");
		for(i=0 ; i<size ; i++)
		{
			for(j=i+1 ; j<size ; j++)
			{
				if(num[i]<num[j])
				{
					int temp = num[i];
					num[i] = num[j];
					num[j] = temp;
				}
			}
		
			printf("%d\n",num[i]);
		}
	}
	return 0;
}
