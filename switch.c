#include<stdio.h>
int main()
{
	int no;
	printf("enter number from 1 to 4:");
	scanf("%d",&no);
	
	switch(no)
	{
		case 1: printf("your choice is 1");
		        break;
		case 2:printf("your choice is 2");
		       break;
		case 3:printf("your choice is 3");
		       break;
		case 4:printf("your choice is 4");
		       break;
		default:printf("invalid choice");
		       break;
	}
}