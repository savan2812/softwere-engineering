//18. Calculate person’s Annual salary
#include <stdio.h>
int main()
 {
    float monthlySalary,annualSalary;  

    printf("Enter the monthly salary: ");
    scanf("%f", &monthlySalary);

    annualSalary = monthlySalary * 12;

    printf("\nThe annual salary is: %.2f", annualSalary);

    return 0;
}

