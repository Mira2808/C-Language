#include<stdio.h>
#include<ctype.h>
int main()
{
	char c;
	printf("enter character:");
	scanf("%c",&c);
	
	if(isupper(c))
	{
		printf("this is in form of uppercase");
	}
	else if(islower(c))
	{
		printf("this is in form of lowercase");
	}
	else if(isdigit(c))
	{
		printf("this is in form of digit");
	}
	else
	{
		printf("this is special character");
	}
}