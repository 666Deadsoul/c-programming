#include<stdio.h>
int main()
{
	int i,n,a[50],max;
	printf("Enter the number you want to display:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	  printf("Enter a number:");
	  scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
		printf("The largest number is %d",max);
	return 0;
}
