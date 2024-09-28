//12 WAP to accept 5 students name and store it in array
	
#include<stdio.h>
int main()
{
	int i;
	char name[20];
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter the value in name[%d] = ",i);
		scanf(" %c",&name[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\nValue of roll[%d] = %c",i,name[i]);
	}
	
	return 0;
}
