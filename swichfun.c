#include<stdio.h>
void sum();
void sub();
void mul();
void div();
int main()
{
   char c;
   printf("enter +-*/:\n");
   scanf("%c",&c);
   
   switch(c)
   {
   	case '+':sum();
   	         break;
   	case '-':sub();
   	  		 break;
   	case '*':mul();
   	         break;
   	case '/':div();
   			 break;
   	default:printf("invalid choice");
   			 break; 	
	}	
}
void sum()
{
    int a,b,c;
    printf("enter a and b:");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("sum is:%d \n",c);
}
void sub()
{
     int a,b,c;
     printf("enter a and b:");
	scanf("%d %d",&a,&b);
	c=a-b;
	printf("sub is:%d \n",c);
}
void mul()
{
	int a,b,c;
	printf("enter a and b:");
	scanf("%d %d",&a,&b);
	c=a*b;
	printf("multipliocation is:%d\n",c);
}
void div()
{
	int a,b,c;
	printf("enter a and b:");
	scanf("%d %d",&a,&b);
	c=a/b;
	printf("division is:%d",c);
}