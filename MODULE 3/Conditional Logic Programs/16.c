/*16. Write a C program to read temperature in centigrade and display a suitable
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot */

#include <stdio.h>
int main()
{
	int Temp;
	printf("Enter the Temperature:");
	scanf("%d",&Temp);
	
	if(Temp<0)
	{
		printf("Freezing weather");
	}
	else if(Temp<=10 && Temp>0)
	{
		printf("Very cold weather");
	}
	else if(Temp<=20 && Temp>10)
	{
		printf("Cold weather");
	}
	else if(Temp<=30 && Temp>20)
	{
		printf("Normal in Temp");
	}
	else if(Temp<=40 && Temp>30)
	{
		printf("Its Hot");
	}
	else
	{
		printf(" Its Very hot");
	}
	
	return 0;
}


