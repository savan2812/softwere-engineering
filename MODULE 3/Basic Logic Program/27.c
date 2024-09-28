//27.Convert days into months
#include <stdio.h>

int main() 
{
    int d;
    float m;
    printf("Enter the number of days: ");
    scanf("%d", &d);
    m = d / 30;
    printf("\nEquivalent months: %.2f", m);

}

