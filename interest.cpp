#include<stdio.h>
main()
{
	float p,r,t,interest;
	printf("\n enter p");
	scanf("%f",&p);
	printf("\n enter r");
	scanf("%f",&r);
	printf("\n enter t");
	scanf("%f",&t);
    interest=p*r*t/100;
    printf("\n intrest is %f",interest);
}
