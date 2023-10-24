#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);
	
	if(b>a && c>a)
	{
		printf("a is minimum");
	}
	else if(a>b && c>b)
	{
		printf("b is minimum");
	}
	else
	{
		printf("c is minimum");
	}
}