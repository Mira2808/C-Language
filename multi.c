#include<stdio.h>
int main()
{
   int n;
   printf("enter n:");
   scanf("%d",&n);
   for(int i=1;i<=10;i++)
   {
   	int ans=n*i;
   	printf("%d * %d =%d \n",n,i,ans);
   }
}