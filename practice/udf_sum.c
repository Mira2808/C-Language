#include<stdio.h>
int udf(int no);
int main()
{
    int n,s;
    printf("enter n:");
    scanf("%d",&n);
    s=udf(n);
    printf("sum of digit is:%d",s);
		
}
int udf(int n)
{
	int s=0;
	for(int i=1; i<=n;i++)
	{
		s=s+i;
	}
	return s;
	
}