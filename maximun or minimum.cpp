#include<stdio.h>

int main()
{
	int num1, num2;
	printf("Entere two numbers");
	scanf("%d%d", &num1, &num2);
	if(num1>num2)
    {
    	printf("\n %d is maximum", num1);
	}
	if(num2>num1)
	{
		printf("\n %d is maximum", num2);
	}
	if(num1<num2)
	{
		printf("\n %d is maximum", num1);
	}
	if(num2<num1)
	{
		printf("\n %d is maximum", num2);
	}
}
