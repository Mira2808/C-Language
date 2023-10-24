#include<stdio.h>
#include<stdlib.h>
int main()
{
      FILE* fpr;
	  char a[100];
	  fpr=fopen("mira.txt","r");
	  	if(fpr == NULL)
	  	{
	  	        printf("file is not created");
				exit(0); 	
		}
		
		else
		{
			printf("file is creadrd \n");
			fgets(a,100,fpr);
			printf("%s",a);
		}
		return 0;
}