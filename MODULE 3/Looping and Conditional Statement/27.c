/*Series Program:
27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........n.*/
#include <stdio.h>
 int main()
 {	
 	float  num,ans = 0.0;
 	int i;
 	
 	printf("Enter the number :");
 	scanf("%f",&num);
 	
 	for(i=1 ; i<=num ; i++)
 	{
 		if(i%2 == 0)
 		{
 			ans = ans + (float)i/i+1;
		}
		else
 		{
 			ans = ans - (float)i/i+1;
		}	
	}
	printf("The answer of 1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........%f = %f ",num,ans);
 	
 	return 0;
 }

