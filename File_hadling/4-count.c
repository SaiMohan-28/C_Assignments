#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=NULL;
	char ch;
	int chara=0,words=0,lines=0;
	fp=fopen("Abc.txt","r");
	if(fp==NULL)
	{
		printf("Error\n");
		exit(0);	
	}	
	while(!feof(fp))
	{
		ch=fgetc(fp);
		chara++;	
		if(ch==' '||'\n')
		words++;	
		if(ch=='\n')	
		lines++;	
	}
	fclose(fp);
	printf("characters=%d\nwords=%d\nlines=%d\n",chara,words,lines);
	return 0;
}
