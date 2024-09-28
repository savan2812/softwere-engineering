//19.Calculate compound interest 
#include <stdio.h>
#include <math.h>

int main()
 {
 	int time,n; 
    float principal,rate,compoundInterest,amount;                   
    
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%d", &time);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    amount = principal * pow((1 + rate / (n * 100)), n * time);
    
    compoundInterest = amount - principal;

    printf("\nTotal amount after %.2f years: %.2f", (float)time, amount);
    printf("\nCompound interest: %.2f", compoundInterest);

    return 0;
}

