/* series program
28. 1 2 3 6 9 18 27 54 ....*/
#include <stdio.h>
int main() 
{
    int n, i,C=1;
    printf("Enter number : ");
    scanf("%d", &n);
    
	printf("\n%d",C);
	for (i=1;i<n;i++)
	{
        if (i%2!= 0) 
		{
			C*=2;
        } 
		else
		{
            C*=1.5;
        }
        printf("\t %d ",C);
    }
	  printf("\n");
    
	return 0;
}

