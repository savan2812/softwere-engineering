//28.Convert years into days and months
#include <stdio.h>
int main() 
{
    int y,d;
    float m;
    printf("Enter the number of years: ");
    scanf("%d",&y);
    d=y*365;
    m = (float)d / 30;
    printf("\nEquivalent days: %d", d);
    printf("\nEquivalent months: %.2f", m);
	return 0;
}
