#include <stdio.h>
main()
{
	char ch;
	printf("Enter any alphabet: ");
	scanf("%c",&ch);
	switch(ch)
	{
		case'a':
			printf("Vowel");
			break;
		case'e':
			printf("Vowel");
			break;
		case'i':
			printf("Vowel");
			break;
		case'o':
			printf("Vowel");
		case'u':
		    printf("Vowel"); 	
		default:
			printf("Consonant");
	}
}
