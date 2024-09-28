//13.Find character value from ascii
#include<stdio.h>
int main()
{
    int asciiValue;
    char character;

    printf("Enter an ASCII value (0 to 127): ");
    scanf("%d", &asciiValue);

    if (asciiValue >= 0 && asciiValue <= 127)
	{
        character = (char)asciiValue;
        printf("\nThe character for ASCII value %d is: '%c'", asciiValue, character);
    }
	else
	{
        printf("\nPlease enter a valid ASCII value between 0 and 127.");
    }

    return 0;
}
