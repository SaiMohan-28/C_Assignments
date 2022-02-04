#include<string.h>
  2 #include<stdio.h>
  3 void my_strcpy(char *b,char *a)
  4 {
  5         int i,len=0;
  6         while(*a!='\0')
  7         {
  8                 *b=*a;
  9                 *b++;
 10                 *a++;
 11         }
 12         *b='\0';
 13 
 14 }
 15 int main()
 16 {
 17         int len;
 18         char a[100],b[100];
 19         printf("enter string:\n");
 20         scanf("%[^\n]s",a);
 21         my_strcpy(b,a);
 22         len=strlen(b);
 23         printf("%d\n",len);
 24         printf("%s\n",b);
 25 
 26 }

