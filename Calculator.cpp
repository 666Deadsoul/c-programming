#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main()
{
    int choice;
    int x,y;
    printf("1.For ADD\n");
    printf("2.For subb\n");
    printf("3.For mul\n");
    printf("4.For div\n");
    printf("Enter the 1st number:");
    scanf("%d",&x);
    printf("Enter the 2nd number:");
    scanf("%d",&y);
        printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            add(x,y);
            break;
        case 2:
            sub(x,y);
            break;
        case 3:
            mul(x,y);
            break;
        case 4:
            div(x,y);
            break;
        default:
        	printf("INVALID");
    }
}
int add(int a,int b)
{
    int sum;
        sum=a+b;
    printf("The sum is %d",sum);
    return 0;
}
int sub(int a,int b)
{
    int diff;
    diff=a-b;
    printf("The difference is %d",diff);
      return 0;
}
int mul(int a,int b)
{
    int mult;
    mult=a*b;
    printf("The produvt is %d",mult);
      return 0;
}
int div(int a,int b)
{
    int dive;
    dive=a/b;
    printf("The division is %d",dive);
      return 0;
}

