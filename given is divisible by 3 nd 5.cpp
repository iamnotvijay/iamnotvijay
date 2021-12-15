#include <stdio.h>
int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d", &num);
	if(num%3==0)
	{
	if(num%5==0)
	  printf("Number is dividible by 3 and 5");
	}
	else
	{
		printf("Number is not divisible by 3 and 5");
	}
}
