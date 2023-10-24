//wanr
#include<stdio.h>
void sum(int a,int b);
void sub(int a,int b);
void mul(int a,int b);
void div(int a,int b);

int main()
{ 
    int a,b;
	sum(2,3);
	sub(a,b);
	mul(1,4);
	div(20,4);
}
void sum(int a,int b)
{
	int c=a+b;
	printf("sum is:%d \n",c);
}
void sub(int a,int b)
{
	printf("enter a and b:");
	scanf("%d %d",&a,&b);
	int c=a-b;
	printf("sub is:%d \n",c);
}
void mul(int a,int b)
{
	int c=a*b;
	printf("multiplication is:%d \n",c);
}
void div(int a,int b)
{
	int c=a/b;
	printf("division is:%d \n",c);
}

