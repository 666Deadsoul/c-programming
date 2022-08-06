#include<stdio.h>
int main()
{
	int n,c;
	printf("1.Sunday\n2.Monday\n3.Tuesday\n4.Wednesday\n5.Thursday\n6.Friday\n7.Saturday\n");
	printf("Choose the day. (1-7)");
	scanf("%d",&c);
	switch(c)
	{
	    case 1:
		    printf("It is not holiday.");
		    break ;
		case 2:
			printf("It is not holiday.");
			break;
		case 3:
			printf("It is not holiday.");
			break;
		case 4:
			printf("It is not holiday.");
			break;
		case 5:
			printf("It is not holiday.");
			break;
		case 6:
		    printf("It is  not holiday.");
			break;
		case 7:
	       	printf("It is holiday");
	    	break;
		default:
			printf("Invalid");
		}
		return 0;
	
}
