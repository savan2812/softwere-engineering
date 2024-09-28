//12.Program of Armstrong Number in C Using For Loop & While Loop
#include <stdio.h>
#include <math.h>
int main()
{	
	int num,digit=0,sum=0,power,i,copy,copy2,rem;
	
	printf("\nEnter the number:");
	scanf("%d",&num);
	
	copy = num;
	copy2 = num;
	
	while(num != 0)
	{
		num = num/10;
		digit++;
	}
	
	for(i = 1 ; i <= digit ; i++)
	{
		rem = copy%10 ;
		power = pow(rem,digit);
		sum = sum + power;
		copy = copy/10;
	}
	
	if(copy2 == sum)
	{
		printf("%d is an Armstrong number ",sum);
	}
	else 
	{
		printf("%d is an Not the Armstrong number",sum);
	}
	return 0;
	
}

