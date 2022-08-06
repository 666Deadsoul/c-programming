#include<stdio.h>
int main()
{
	int a[100],n,i,num;
	printf("Enter the number you want to display:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	num=a[0];
	for(i=0;i<n;i++)
	{
		if(num>a[i])
		{
			num=a[i];
		}
	}
	printf("The smallest number is %d.",num);
	return 0;
}
