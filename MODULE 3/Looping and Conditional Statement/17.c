//17.Calculate 5 numbers from user and calculate number of even and odd using of while loop
#include <stdio.h>
int main()
{	
	int i=1,number,countodd = 0, counteven=0;
	
	while(i<=5)
	{
		printf("Enter the number:");
		scanf("%d", &number);
		i++;
		
		if(number%2 == 0)
		{
			counteven++;
		}
		else{
			countodd++;
		}
	}
	
	printf("\nTotal even numbers: %d",counteven);	
	printf("\nTotal odd numbers: %d",countodd);

	return 0;
}

