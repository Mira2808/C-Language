#include<stdio.h>
int main()
{
	int n,reverse=0,remain,num;
	printf("enter int:");
	scanf("%d",&n);
	num=n;
	
	while(n != 0)
	{
		remain=n%10;
		reverse=reverse*10 +remain;
		n/=10;
	}
	if(num==reverse)
	{
		printf("it is palindrome");
	}
	else
	{
		printf("it is not palidrome");
	}
}