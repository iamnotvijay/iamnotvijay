#include<stdio.h>
main()
{
	int a,k;
	printf("Enter the value of a");
	scanf ("%d",&a);
	k=a%2;
	switch(k)
{



    
case 0:
  printf("Given value is even number");
break;
case 1:
 printf("given value is odd number");
    break;
    default:printf("A different opperation has been entered");
}
}
