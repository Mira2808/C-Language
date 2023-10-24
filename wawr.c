//wawr

#include<stdio.h>
int sum(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int main()
{
    printf("sum is:%d \n",sum(2,3));
	printf("sub is:%d \n",sub(4,2));
	printf("multiplication is:%d \n",mul(1,3));
	printf("division is:%d",div(4,2));	
}

int sum(int a,int b)
{
    int c=a+b;
    return c;
	
}
int sub(int a,int b)
{
	int c=a-b;
	return c;
}
int mul(int a,int b)
{
	int c=a*b;
	return c;
}
int div(int a,int b)
{
	int c=a/b;
	return c;
}