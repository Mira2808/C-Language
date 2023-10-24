#include<stdio.h>
int main()
{
	int a[3][2];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
		printf("enter noL:");
		scanf("%d",&a[i][j]);
	    }
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
		printf("%d \n\t",a[i][j]);
	    }
	}
}
