/*Series Program:
25.(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)*/
#include <stdio.h>
int main()
{
	int i ,num,ans=0;
	
	printf("Enter the number :");
	scanf("%d",&num);
	
	for(i=1 ; i<= num ;i++)
	{
		ans = ans + (i * i);
	}
	printf("Answer of (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (%d*%d) is = %d",num,num ,ans);

	return 0;
}

