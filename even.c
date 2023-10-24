#include<stdio.h>
int main()
{
	int a;
	printf("enter a:");
	scanf("%d",&a);
	
//	if(a%2==0)
//	{
//		printf("number is odd");
//	}
//	else{
//		printf("number is even");
//	}
    (a%2==0)?printf("number is odd"):printf("number is even");
}