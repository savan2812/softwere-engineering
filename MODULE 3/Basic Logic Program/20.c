//20. Accept monthly salary from the user and deduct 10% insurance premium, 10% loan installment find out of remaining salary.
#include <stdio.h>
int main()
 {
    float monthlySalary,insurancePremium,loanInstallment,remainingSalary; 
    
    printf("Enter the monthly salary: ");
    scanf("%f", &monthlySalary);

    insurancePremium = monthlySalary * 0.10; 
    loanInstallment = monthlySalary * 0.10;   
    
    remainingSalary = monthlySalary - (insurancePremium + loanInstallment);

    printf("\nInsurance premium deducted: %.2f", insurancePremium);
    printf("\nLoan installment deducted: %.2f", loanInstallment);
    printf("\nRemaining salary: %.2f", remainingSalary);

    return 0;
}


