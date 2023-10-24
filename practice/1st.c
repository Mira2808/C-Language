#include<stdio.h>
int main()
{
	int age;
	char name[8];
	printf("Enter your age:");
	scanf("%d",&age);
	
	printf("Enter your name:");
	scanf("%s",&name);
	
	printf("your age is:%d \n",age);
	printf("your name is:%s",&name);
	
	
}