#include<stdio.h>
main()
{
	float base, height, area;
	printf("enter the value for base of a triangle");
	scanf("%f",&base);
	printf("enter the value for height of a triangle");
	scanf("%f",&height);
	area = (base*height)/2;
	printf("\n area of the triangle is %f",area);
	
}
