#include<stdio.h>
int main()
{
	char a1[12]="computer";
	for(int i=0;i<=7;i++)
	{
		for(int j=i;j<=7;j++)
		{
			printf("%c",a1[j]);
		}
		printf("\n");
	}
}