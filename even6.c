#include<stdio.h>
int main()
{
	int a[50];
	for(int i;i<50;i++)
	{
		if(a[i]%2==0)
		{
			printf(" even no are:%d \t \n",a[i]);
			continue;
		}
		else                                                                                                         
		{
			printf("odd no are:%d \t \n",a[i]);                               
		}
	}
}