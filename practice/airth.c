#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("enter value of b:");
	scanf("%d",&b);
	
	c=a+b;
	printf("sum is:%d \n",c);
	c=a-b;
	printf("suntraction is:%d \n",c);
	c=a*b; 
	printf("multiplication is:%d \n",c);
	c=a/b;
	printf("division is:%d \n",c);
}