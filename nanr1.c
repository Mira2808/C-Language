#include<stdio.h>
void sum();
void sub();
void mul();
void div();
int main()
{
   int a=5,b=3,c;
   sum();
   sub();
   mul();
   div();	
}
void sum()
{
    int a=2,b=3,c;
	c=a+b;
	printf("sum is:%d \n",c);
}
void sub()
{
     int a=2,b=3,c;
	c=a-b;
	printf("sub is:%d \n",c);
}
void mul()
{
	int a=2,b=3,c;
	c=a*b;
	printf("multipliocation is:%d\n",c);
}
void div()
{
	int a=2,b=3,c;
	c=a/b;
	printf("division is:%d",c);
}