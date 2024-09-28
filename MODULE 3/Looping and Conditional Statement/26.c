/*Series Program:
26.(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)*/
#include <stdio.h>
int main()
{
    int num , i , j ,ans=0, sum=0 ;
    
    printf("Enter the number :");
    scanf("%d",&num);
    
    for(i=1 ; i<=num ; i++)
    {
    	sum = 0;
    	for(j=1 ; j<=i ; j++)
    	{
    		sum = sum+j;
		}
		ans = sum + ans;	
	}
	printf("The answer of (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+%d) = %d",num, ans);

    return 0;
}


