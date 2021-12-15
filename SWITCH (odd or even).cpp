#include<stdio.h>
main()
{
	int a,k;
	printf("Enter a number to check even or odd: ");
	scanf("%d",&a);
	k=a%2;
	switch(k)
	{
		case 0:
			printf("Number is Even");
	        break;
	    case 1:
	        printf("Number is odd");
		    break;
    }
}
