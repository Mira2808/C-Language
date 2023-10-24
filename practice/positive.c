#include<stdio.h>
int main()
{
	int no;
	printf("entr number:");
	scanf("%d",&no);
	if(no==0)
	{
		printf("number is zero");
	}
	else if(no>0)
	{
		printf("number is positive");
	}
	else
	{
		printf("number is nagative");
	}
}