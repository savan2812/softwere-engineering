//9. C Program to Check Uppercase or Lowercase or Digit or Special Character
#include<stdio.h>
int main() 
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') 
	{
        printf("\nThe character '%c' is an Uppercase letter", ch);
    }
	 else if (ch >= 'a' && ch <= 'z') 
	{
        printf("\nThe character '%c' is a Lowercase letter", ch);
    }
	else if (ch >= '0' && ch <= '9') 
	{
        printf("\nThe character '%c' is a Digit", ch);
    }
	else 
	{
        printf("\nThe character '%c' is a Special character", ch);
    }

    return 0;
}


