//14.Find ascii value of given number
#include<stdio.h>
int main() 
{
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    printf("\nThe ASCII value of '%c' is: %d", character, (int)character);

    return 0;
}
