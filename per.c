#include<stdio.h>
int main()
{
	int m1,s1,h1,g1;
	float per;
	
	printf("enter marks for maths:");
	scanf("%d",&m1);
	printf("enter marks for science:");
	scanf("%d",&s1);
	printf("enter marks for hindi:");
	scanf("%d",&h1);
	printf("enter marks for gujrati:");
	scanf("%d",&g1);
	
	per=(m1+s1+h1+g1)/4;
	printf("your percentage is:%f \n",per);
	
	if(per>=80 && per<=99)
	{
		printf("you got first class");
	}
	else if(per>=70 && per<=79)
	{
		printf("you got second class");
	}
	else if(per>=60 && per<=69)
	{
		printf("you got third class");
	}
	else{
		printf("you are pass");
	}
}