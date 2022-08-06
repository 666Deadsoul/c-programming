#include<stdio.h>
int facto(int);
int main()
{
	int num,res;
	printf("Enter any number:");
	scanf("%d",&num);
	res=facto(num);
	printf("The factorial of %d is %d",num,res);
	return 0;
}
int facto(int num)
{
	if(num==0 || num==1){
		return (1);
	}
	else{
		return (num*facto(num-1));
	}
}
