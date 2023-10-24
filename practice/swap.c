#include<stdio.h>
int main()
{
	int a=2,b=3,temp;
	temp=a;
	a=b;
	b=temp;
	printf("value of a:%d and value of b is:%d",a,b);
}