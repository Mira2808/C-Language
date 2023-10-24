#include<stdio.h>

int main()
{
	long int salary;
	printf("enter salary:");
	scanf("%ld",&salary);
	
	if(salary>=10000)
	{
		salary=salary+2000;
		printf("salary is:%d",salary);
	}
	else{
		salary=salary+1000;
		printf("salary is:%d",salary);
	}

}