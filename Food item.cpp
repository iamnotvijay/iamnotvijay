#include<stdio.h>
main ()
{
int quantity,total;
char k;
printf("Burger- b, Pizza- p, FrenchFries- f, Swandwich- s");
scanf("%c",&k);
switch(k)
{
	case'b': printf("User has selected burger");
printf("enter the quantity");
scanf("%d",&quantity);
total=quantity*200;
break;
case'f': printf("User has selected french fries");
printf("Enter the quantity");
scanf("%d",&quantity);
total=quantity*50;
break;
case'p': printf("User has selected pizza");
printf("Enter the quantity");
scanf("%d",&quantity);
total=quantity*500;
break;
case's': printf("User has selected sandwich");
printf("Enter the quantity");
scanf("%d",&quantity);
total=quantity*150;
break;
default:printf("Entered food item is incorrect");
}
printf("Enter total %d", total);
}

