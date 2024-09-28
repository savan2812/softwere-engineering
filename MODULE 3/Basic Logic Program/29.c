//29.Convert minutes into seconds and hours 
#include <stdio.h>
int main()
 {
    int minutes,seconds;
    float hours;

    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    seconds = minutes * 60;        
    hours = minutes / 60.0;        

    printf("\n%d minutes is equivalent to %d seconds and %.2f hours.", minutes, seconds, hours);

    return 0;
}

