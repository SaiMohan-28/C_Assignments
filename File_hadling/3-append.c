#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=NULL;
	char str[50];
	printf("Enter data\n");
	scanf("%s",str);
	fp=fopen("Abc.txt","a");
	if(fp==NULL)
	{	
	printf("Error\n");
	exit(0);	
	}
	else
	{
	fputs(str,fp);
	}
	return 0;
}
