/* 26.WAP to show
ii. Vowel or Consonant using switch case */
	#include <stdio.h>
int main()
{
	char character;
	printf("Enter any character:");
	scanf(" %c",&character);
	
	switch(character)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': printf("Vowels");
		break;
		default : printf("Consonant");
		
	}
	return 0;
}

