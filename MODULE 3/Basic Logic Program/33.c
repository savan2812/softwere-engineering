//33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include <stdio.h>
int main() 
{
    int n;

    printf("Enter an integer: ");
    scanf("%d",&n);

    printf("\n%d^1 = %d ",n,n);               
    printf("\n%d^2 = %d ",n,n * n);           
    printf("\n%d^3 = %d ",n,n * n * n); 
	       
    return 0;
}

