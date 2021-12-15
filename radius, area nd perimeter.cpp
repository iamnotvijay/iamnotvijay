#include<stdio.h>
main()
{
	float radius,area,perimeter;
	printf("enter the radius of circle");
	scanf("%f",&radius);
	area=3.142*radius*radius;
	perimeter=2*3.142*radius;
	printf("\n area=%f and \n perimeter=%f",area,perimeter);
}
