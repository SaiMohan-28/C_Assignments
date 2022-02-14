#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[100];
	FILE *fp=NULL;
	fp=fopen("Abc.txt","r");
	if(fp==NULL)
	{
	printf("Erros\n");
	exit(0);
	}
	else
	{
	while(!(feof(fp)))
	{
		fgets(str,6,fp);
	}
	printf("%s\n",str);
	}
}
