//14 Perform 2D matrix array


#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],ans[100][100];
	int i,j,k,row,col;
	char ch;
	printf("\nEnter the count of rows = ");
	scanf("%d",&row);
	printf("\nEnter the count of cols = ");
	scanf("%d",&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the element in a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the element in b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nArray a := \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nArray b := \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("\n Addition");
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					ans[i][j] = a[i][j] + b[i][j];
				}
			}
			printf("\nAnswer of Addition is :=\n");
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%d ",ans[i][j]);
				}
				printf("\n");
			}
			return 0;
}
