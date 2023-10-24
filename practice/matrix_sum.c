#include<stdio.h>
int main()
{
	int i,j,ans;
	int a[3][3]={{1,2,3},{5,8,6},{8,9,0}};
	int b[3][3]={{6,8,7},{9,4,3},{9,7,5}};
	int c[3][3];
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d \t",c[i][j]);
		}
		printf("\n");
	}
}