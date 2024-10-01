#include <stdio.h>

void add() 
{
    int num1, num2, result;
    printf("\nEnter first numbers = ");
    scanf("%d", &num1);
	printf("\nEnter second numbers = ");
    scanf("%d",&num2);
    result = num1 + num2;
    printf("\nResult: %d\n ",result);
}


void subtract() 
{
    int num1, num2, result;
    printf("\nEnter first numbers: ");
    scanf("%d",&num1);
	printf("\nEnter second numbers: ");
    scanf("%d",&num2);
    result = num1 - num2;
    printf("\nResult: %d\n ",result);
}


void multiply() 
{
    int num1, num2, result;
    printf("\nEnter first numbers = ");
    scanf("%d",&num1);
    printf("\nEnter second numbers = ");
    scanf("%d",&num2);
	result = num1 * num2;
    printf("\nResult: %d\n ",result);
}


void divide() 
{
    int num1, num2, result;
    printf("\nEnter first numbers = ");
    scanf("%d",&num1);
    printf("\nEnter second numbers = ");
    scanf("%d",&num2);
    
	if (num2 != 0) 
	{
        result = num1 / num2;
        printf("\nResult: %d\n ",result);
    }
	else 
	{
        printf("\nError: Division by zero is not allowed.");
    }
}

int main() 
{
    int choice;
    while (1) 
	{
        printf("\n---MENU---\n");
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        
        switch (choice) 
		{
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 5:
                printf("\nExiting...");
                return 0;
            default:
                printf("\nInvalid input");
        }
    }
    return 0;
}
