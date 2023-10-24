#include<stdio.h>
int main()
{
	int a=2,b=3;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("value of a:%d",a);
	printf("value of b is:%d",b);
}