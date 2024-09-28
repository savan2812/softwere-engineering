/*22. Calculate compound interest (Compound Interest formula: 
a. Formula to calculate compound interest annually is given by: Amount= P(1 + R/100)t 
b. Compound Interest = Amount – P */
#include <stdio.h>
#include <math.h>
int main()
 {
 	int time; 
    float principal,rate,amount,compoundInterest;           
    
    printf("Enter the principal amount (P): ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (R in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time (t in years): ");
    scanf("%d", &time);

    amount = principal * pow((1 + rate / 100), time);
    
    compoundInterest = amount - principal;

    printf("\nTotal amount after %.2f years: %.2f", (float)time, amount);
    printf("\nCompound interest: %.2f", compoundInterest);

    return 0;
}

