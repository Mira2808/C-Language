#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b:");
	scanf("%d %d",&a,&b);
	
	if(b>a)
	{
		printf("a is minimum");
	}
	else
	{
		printf("b is minimum");
	}
}