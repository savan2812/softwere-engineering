/*
13 WAP to accept 5 numbers from user and check entered number is even or odd
using of array
*/

#include<stdio.h>
int main()
{
	int a[5],ecount=0,ocount=0,i;
	for(i=0;i<5;i++)
	{
		printf("\n Enter The Element Of a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n Even Number Is:%d",a[i]);
		}
		else
		{
			printf("\n Odd Number Is:%d",a[i]);
		}
	}
	return 0;
}










