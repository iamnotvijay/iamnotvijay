#include<stdio.h>
main()
{
	int i,n,r=0,d,t;
	printf("Enter a number");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
	if(t==r)
{
	printf("It is a palindrome");
}
	else("It is nor a palindrome");
}
