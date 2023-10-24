#include<stdio.h>
#include<string.h>
int main()
{
	char str[12]="hello";
	char mira[9]="mira";
	char mira1[10];
	char a[4]="abc";
	char b[4]="xyz";
	
	printf("%s \n",strrev(str));
	printf("%s \n",strupr(mira));
	printf("%s \n",strlwr(mira));
	
	printf("%d \n",sizeof(str));
	printf("%d \n",strlen(mira1));
	
	strcat(str,mira);
	printf("%s \n",str);
	
	int res=strcmp(a,b);
	
	if(res==0)
	{
		printf("eqal");
	}
	else
	{
		printf("not eqal");
	}
	
	
}