/*21.Write a C program to input basic salary of an employee and calculateits Gross salary according to following:
	Basic Salary <= 10000 : HRA = 20%, DA = 80%
	Basic Salary <= 20000 : HRA = 25%, DA = 90%
	Basic Salary > 20000 : HRA = 30%, DA = 95% */

#include <stdio.h>
int main()
{
	int salary , HRA , DA , Grosssalary;
	
	printf("Enter the amount of basic salary:");
	scanf("%d",&salary);
	
	
	if(salary <= 10000)
	{
		HRA = salary * 20/100;
		DA = salary * 80/100;
		Grosssalary = salary + HRA + DA ;
		
		printf("Total amount of gross salary is %d",Grosssalary);
	}
	else if(salary <= 20000 && salary> 10000)
	{
		HRA = salary * 25/100;
		DA = salary * 90/100;
		Grosssalary = salary + HRA + DA ;
		
		printf("Total amount of gross salary is %d",Grosssalary);
	}
	else
	{
		HRA = salary * 30/100;
		DA = salary * 95/100;
		Grosssalary = salary + HRA + DA ;
		
		printf("Total amount of gross salary is %d",Grosssalary);
	}
	return 0;
}

