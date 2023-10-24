#include<stdio.h>
#include<string.h>
int main()
{
	FILE* fpr;
	char a[100]="good morning";
	fpr=fopen("mira.txt","w");
	if(fpr==NULL)
	{
		printf("file is not created");
	}
	else
	{
		if(strlen(a)>0)
		{
		   fputs(a,fpr);
		   fputs("\n",fpr);
		   fpridntf(fpr,"%s %s %s","micky","mira","mit");	
		}
	}
}