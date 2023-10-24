#include<stdio.h>
int main()
{
	int p,n;
	float r,si;
	printf("enter principal:");
	scanf("%d",&p);
	printf("enter number of year:");
	scanf("%d",&n);
	printf("enter rate:");
	scanf("%f",&r);
	
	si=(p*r*n)/100;
	printf("simple interest is:%f",si);
	
}