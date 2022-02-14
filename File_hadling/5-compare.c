#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=NULL,*fp1=NULL;
	int flag=0;
	char ch,ch1;
 	fp=fopen("Abc.txt","r");
	if(fp==NULL)
	exit(0);
	fp1=fopen("abc.txt","r");
	if(fp1==NULL)
	exit(0);
	while(!feof(fp)&&(!feof(fp1)))
	{
		ch=fgetc(fp);
		ch1=fgetc(fp1);
		if(ch!=ch1){
		flag=1;
		break;}
	}
	fclose(fp);
	fclose(fp1);
	if(flag==0)
	printf("same\n");
	else("not same\n");
	return 0;
}
