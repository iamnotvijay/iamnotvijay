#include<stdio.h>
main()
{
	char c;
	printf("Enter the alphabet");
	scanf("%c",&c);
	printf("\n ASCII value:%d" ,c);
	switch((c>=65)&&(c<=90))
	{
		case 1:printf("\n The lowered char is: %c", c+32);
		    break;
	    case 0:switch((c>=97)&&(c<=122))
	            {
	            	case 1:printf("\n The uppered char is: %c",c-32);
	            	    break;
	            	case 0:switch((c>=48)&&(c<=57))
					        {
					        	case 1:printf("\n it is an number");
					        	    break;
					            case 0:printf("\n it is an special charcter");
					                break;
								}    
				}
	}
}
