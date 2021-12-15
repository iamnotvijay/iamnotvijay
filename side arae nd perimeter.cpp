#include<stdio.h>
main()
{
	float side,area,perimeter;
	printf("enter side of square");
	scanf("%f",&side);
	area=side*side;
	perimeter=4*side;
	printf("area = %f and perimeter=%f",area,perimeter);
}
