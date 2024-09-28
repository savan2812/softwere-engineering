/*18. Write a C Program to Print the Multiplication Table of N 
i. E.g. 5 * 1 = 5 
ii. 5 * 2 = 10 
     1. . 
     2. . 
iii. 5 * 10 = 50*/
#include <stdio.h>
int main()
{	
	int i,N,table;
	
	printf("Enter the value of 'N'=");
	scanf("%d",&N);
	
	printf("Table of N =");
	for(i=1 ; i<=10 ; i++)
	{
		table = N * i;	
		printf("\n%d * %d = %d",N,i,table);
	}
	
	return 0;
}

