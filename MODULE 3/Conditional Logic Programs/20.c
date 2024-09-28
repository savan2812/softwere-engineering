//20. Write a program in C to read any Month Number in integer and display the number of days for this month.
#include <stdio.h>
int main()
{
	int month  ;
	
	printf("Enter the month number(1 to 12) ");
	scanf("%d",&month);
	
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 )
	{
		printf(" Number %d month has 31 days",month);
	}
	else if ( month == 4 || month == 6 || month == 9 || month == 11)
	{
		printf(" Number %d month has 30 days",month);
	}
	else if ( month == 2)
	{
		printf("Number %d month has 29",month);
	}
	else
	{
		printf("Invalid Month Number");
	}
	
	return 0;

}
