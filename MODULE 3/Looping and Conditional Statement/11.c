//11.Accept 5 names from user at run time
#include<stdio.h>
int main()
{
	int i;
	char name[500];
	
	for(i=1;i<=5;i++)
	{
		printf("\nname %d:",i);
		gets(name);
		puts(name);
	}
	return 0;
}

