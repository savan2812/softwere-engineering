//4. WAP to make simple calculator (operation include Addition, Subtraction,Multiplication, Division, modulo) using conditional statement
#include<stdio.h>
int main() 
{
    float num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &num1); 
    printf("\nEnter second number: ");
    scanf("%f", &num2);
    printf("\nEnter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);    

    if (operator == '+') 
	{
        result = num1 + num2;
        printf("\nResult: %.2f", result);
    } 
	else if (operator == '-') 
	{
        result = num1 - num2;
        printf("\nResult: %.2f", result);
    } 
	else if (operator == '*') 
	{
        result = num1 * num2;
        printf("\nResult: %.2f", result);
    } 
	else if (operator == '/') 
	{
        if (num2 != 0)
		{
            result = num1 / num2;
            printf("\nResult: %.2f", result);
        } 
		else 
		{
            printf("\nError: Division by zero is not allowed.");
        }
    } 
	else if (operator == '%') 
	{
        if ((int)num2 != 0) 
		{
            result = (int)num1 % (int)num2;
            printf("\nResult: %.0f", result);
        } 
		else 
		{
            printf("\nError: Modulo by zero is not allowed.");
        }
    } 
	else 
	{
        printf("\nError: Invalid operator.");
    }

    return 0;
}
