/*22. WAP to input the week number and print week day.*/

#include<stdio.h>
int main()
{	
	int weeknum;
	
	printf("Enter the number =");
	scanf("%d",&weeknum);
	
	switch(weeknum)
	{
		case 1 : printf("Sunday");
		break;
		
		case 2 : printf("Monday");
		break;
		
		case 3 : printf("Tuesday");
		break;
		
		case 4 : printf("Wednesday");
		break;
		
		case 5 : printf("Thursday");
		break;
		
		case 6 : printf("Friday");
		break;
		
		case 7 : printf("Saturday");
		break;
		
		default : printf("Invalide day");
		
	}
	
	return 0;
	
}
