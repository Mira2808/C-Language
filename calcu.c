#include<stdio.h>
int main()
{
	char c;
	int a,b,x;
	printf("enter any symbol from this +,-,*,/:");
	scanf("%c",&c);
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	
	switch(c)
	{
		case '+': x=a+b;
		          printf("sum is:%d",x);
	           	  break;
	    case '-':x=a-b;
	    		 printf("division is:%d",x);
	    		 break;
	    case '*':x=a*b;
	   			 printf("multiplication is:%d",x);
	             break;
	    case '/':x=a/b;
	             printf("division is :%d",x);
	             break;
	    default: printf("sorry invalid chooice");
	             break;
	}
}