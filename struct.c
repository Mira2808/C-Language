#include<stdio.h>
struct stu{
	int id;
	char name[50];
	int marks[3];
};
int main()
{
	struct stu s1={1,"mira",{20,30,40}};
	struct stu s2={2,"bhavika",{10,50,60}};
	
	printf("student id is:%d \n",s1.id);
	printf("student name is:%s\n",s1.name);
	for(int i=0;i<=2;i++)
	{
		printf("mark is:%d \n",s1.marks[i]);
	}
	printf("second student details:\n");
	
	printf("student id is:%d \n",s2.id);
	printf("student name is:%s\n",s2.name);
	for(int i=0;i<=2;i++)
	{
		printf("mark is:%d \n",s2.marks[i]);
	}
}