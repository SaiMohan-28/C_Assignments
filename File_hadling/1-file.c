#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=NULL;
	fp=fopen("Abc.txt","w");
	if(fp==NULL)
	{
	printf("error\n");
	exit(0);
	}
	else
	{
	fputs("HEllo",fp);
	}
	fclose(fp);
	return 0;
}
