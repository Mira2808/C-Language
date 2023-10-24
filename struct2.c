#include<stdio.h>
struct stu{
	int id;
	char name[10];
	int marks[3];
}s1,s2;
int main()
{
	printf("enter value for first student:\n");
	printf("enter id:");
	scanf("%d",&s1.id);
	printf("enter name:");
	scanf("%s",&s1.name);
	for(int i=0;i<=2;i++)
	{
		printf("enter marks:");
		scanf("%d",&s1.marks[i]);
	}
	printf("id is:%d\n",s1.id);
	printf("name is:%s\n",s1.name);
	for(int i=0;i<=2;i++)
	{
		printf("marks is:%d \n",s1.marks[i]);
	}
	
	printf("enter value for second student:\n");
	printf("enter id:");
	scanf("%d",&s2.id);
	printf("enter name:");
	scanf("%s",&s2.name);
	for(int i=0;i<=2;i++)
	{
		printf("enter marks:");
		scanf("%d",&s2.marks[i]);
	}
	printf("id is:%d\n",s2.id);
	printf("name is:%s\n",s2.name);
	for(int i=0;i<=2;i++)
	{
		printf("marks is:%d \n",s2.marks[i]);
	}
	
}