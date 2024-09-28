/*3. WAP to take 10 no. Input from user find out below values
	a. How many Even numbers are there
	b. How many odd numbers are there
	c. Sum of even numbers
	d. Sum of odd numbers 	*/
#include <stdio.h>
int main()
{
	int num,i,countodd=0,sumofodd=0,counteven=0,sumofeven=0;
	
	for(i=1;i<=10;i++)
	{
		printf("Enter the number =");
		scanf("%d",&num);
		
		if(num%2 != 0)
		{
			countodd++;
			sumofodd = sumofodd+num;
		}
		else
		{
			counteven++;
			sumofeven = sumofeven+num;
		}
		
		}
		printf("\nEven number = %d", counteven);
		printf("\nSum of Even number = %d", sumofeven);
		printf("\nodd number = %d", countodd);
		printf("\nSum of odd number = %d", sumofodd);		
}

