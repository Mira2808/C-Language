#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	
	c=a+b;
	printf("sum is:%d \n",c);
	c=a-b;
	printf("subtraction is:%d \n",c);
	c=a*b;
	printf("multiplication is:%d \n",c);
	c=a/b;
	printf("divisuion is:%d",c);
}