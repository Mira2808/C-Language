#include<stdio.h>
int main()
{
	int i,j,a[5],temp;
	for(i=0;i<=4;i++)
	{
		printf("enter no:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		for(j=i+1;j<=4;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("maxi:%d and mini:%d",a[0],a[4]);
}