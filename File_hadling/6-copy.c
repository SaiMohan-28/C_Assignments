#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp=NULL,*fp1=NULL;
	char str[50];
	fp=fopen("Abc.txt","r");
	fp1=fopen("abc.txt","w");
	if(fp==NULL || fp1==NULL)
	{
	printf("error");
	exit(0);
	}
	while(!feof(fp))
	{
		fgets(str,20,fp);	
		fputs(str,fp1);
	}
	fclose(fp);
	fclose(fp1);
	return 0;
}
