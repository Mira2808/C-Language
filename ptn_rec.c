#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=6;i++)
	{
		for(j=i;j<=6;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(j=2;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=i;j++)              
		{
			printf(" ");
		}
		 for(j=i;j<=6;j++)
		{
			printf("*");
		}
     	 for(j=i;j<=6;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}