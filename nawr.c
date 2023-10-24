6//nawr
#include<stdio.h>
int sum();
int sub();
int mul();
int div();

int main()
{
	printf("sum is:%d\n",sum());
	printf("subtraction is:%d \n",sub());
	printf("multiplication is:%d \n",mul());
	printf("division is:%d \n",div());
}
int sum()
{
	int a=2,b=4,c;
	c=a+b;
	return c;
}
int sub()
{
	int a=5,b=3,c;
	c=a-b;
	return c;
}
int mul()
{
	int a=2,b=4,c;
	c=a*b;
	return c;
}
int div()
{
	int a=4,b=2,c;
	c=a/b;
	return c;
}
