#include<stdio.h>
int fibo(int n)
{
	if(n==0)
	{
	 return 0;	
	}
	else if(n==1)
	{
		return 1;
	}
	else{
		return fibo(n-2)+fibo(n-1);
	}
}
int main()
{
	int i;
	for(i=0;i<=5;i++)
	{
		printf("%d \t",fibo(i));
	}
}