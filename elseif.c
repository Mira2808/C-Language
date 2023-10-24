#include<stdio.h>
int main()
{
	int m;
	printf("enter your mark:");
	scanf("%d",&m);
	
	if(m>=85 && m<100)
	{
		printf("you got first class");
	}
	else if(m>=75 && m<=84)
	{
		printf("you got second class");
	}
	else if(m>=65 && m<=74)
	{
		printf("you got third class");
	}
	else{
		printf("you are pass");
	}
}