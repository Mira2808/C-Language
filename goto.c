#include<stdio.h>
int evenodd(int n)
{
	if(n%2==0)
	{
		goto even;
	}
	else 
	{
		goto odd;
	}
even:
	printf("%d is even number",n);
	return n;
odd:
	printf("%d is odd number",n);
}
int main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	evenodd(n);
	return 0;
}