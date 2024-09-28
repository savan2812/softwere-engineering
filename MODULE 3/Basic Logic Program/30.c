//30. WAP to convert years into days and days into years
#include <stdio.h>
int main() 
{
    int y=1,d;
    printf("Enter the number of years: ");
    scanf("%d",&y);
    d=y*365;
    printf("\nEquivalent days: %d ", d);
    printf("\nEnter the number of days: ");
    scanf("%d",&d);
	y=d/365;
    printf("\nEquivalent years: %d ", y);
	return 0;
}
