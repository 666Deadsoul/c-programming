#include<stdio.h>
int main()
{
	int n,i,a[50],temp[50],k=0;
	printf("How many number do u want to enter?");
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		temp[i]=a[i]%10;
	}
	for(i=0;i<n;i++)
	{
		k=10*k +temp[i];
	}
	if(k%10==0)
	{
		printf("The number is %d and It is divisible by 10.",k);
	}
	else{
		printf("The number is %d and It is not divisible by 10.",k);
	}
	return 0;
}
