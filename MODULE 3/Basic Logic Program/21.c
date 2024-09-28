//21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable
#include<stdio.h>
int main()
 {
    int a,b,temp,i,j; 

    printf("\nEnter two numbers:");
    printf("\nNumber 1: ");
    scanf("%d",&a);
    printf("\nNumber 2: ");
    scanf("%d",&b);
    

    printf("\nSwapping using a third variable:");
    temp = a; 
    a = b;    
    b = temp; 
    printf("\nAfter swapping: \nNumber 1 = %d, \nNumber 2 = %d", a, b);

	printf("\nEnter two numbers:");
	printf("\nNumber 1: ");
    scanf("%d",&i);
    printf("\nNumber 2: ");
    scanf("%d",&j);
    
    printf("\nSwapping without using a third variable:");
    i = i + j; 
    j = i - j; 
    i = i - j; 
    printf("\nAfter swapping: \nNumber 1 = %d, \nNumber 2 = %d", a, b);

    return 0;
}

