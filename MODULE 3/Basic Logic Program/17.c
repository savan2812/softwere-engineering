//17. Calculate person’s insurance premium based on salary 
#include<stdio.h>
int main() 
{
    float salary,premium,premiumRate;             
	
	printf("Enter the salary: ");
    scanf("%f", &salary);
    
    if (salary < 30000)
	 {
        premiumRate = 0.05; 
   	 } 
	else if (salary < 60000) 
	 {
        premiumRate = 0.07; 
     }
	 else
	 {
        premiumRate = 0.10; 
   	 }

    premium = salary * premiumRate;

    printf("\nThe insurance premium is: %.2f", premium);

    return 0;
}
