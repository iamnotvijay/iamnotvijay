#include<stdio.h>

int main()
{
	
	int n, lastDigit;
	printf("enter any number: ");
	scanf("%d",&n);
	lastDigit = n%10;
	printf("last digit =%d", lastDigit);
}
