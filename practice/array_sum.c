#include<stdio.h>
int main()
{
	int a[5],sum=0,i;
	
	for(i=0;i<=4;i++)
	{
		printf("enter value:");
		scanf("%d",&a[i]);
		sum+=a[i];
		
	}
	printf(":%d",sum);
	
	
}