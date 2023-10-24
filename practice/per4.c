#include<stdio.h>
int main()
{
	int s1,m1,h1,g1;
	float per;
	int sub=4;
	printf("enter marks:");
	scanf("%d",&s1);
	printf("enter marks:");
	scanf("%d",&m1);
	printf("enter marks:");
	scanf("%d",&h1);
	printf("enter marks:");
	scanf("%d",&g1);
	
	per=(s1+m1+h1+g1)/sub;
	
	printf("your percentage is:%f \n",per);
	if(per>=70)
	{
		printf("you got distriction");
	}
	else if(per>=60)
	{
		printf("you got first class");
	}
	else if(per>=50)
	{
		printf("you got second class");
	}
	else if(per>=40)
	{
		printf("you are pass");
	}
	else
	{
		printf("you are pass");
	}
}