//25.Accept 5 expense from user and find average of expense 
#include <stdio.h>
int main()
{
	float expense1 ,expense2 ,expense3 ,expense4 ,expense5, sumofexp, ave; 
	
	printf("Enter the value of Expanse 1=");
	scanf("%f",&expense1);
	
	printf("Enter the value of Expanse 2=");
	scanf("%f",&expense2);
	
	printf("Enter the value of Expanse 3=");
	scanf("%f",&expense3);
	
	printf("Enter the value of Expanse 4=");
	scanf("%f",&expense4);
	
	printf("Enter the value of Expanse 5=");
	scanf("%f",&expense5);
	
	sumofexp = expense1 +expense2 +expense3 +expense4 +expense5 ;
	
	ave = sumofexp/5;	
	
	printf("Ave of expense is: %f",ave);
	
	return 0;
}

