 #include<stdio.h>
  2 #include<string.h>
  3 void my_strcat(char a[],char b[])
  4 {
  5         int i,j=0;
  6         for(i=0;a[i]!=0;i++)
  7                 continue;
  8         while(b[j]!=0)
  9         {
 10                 a[i]=b[j];
 11                 i++;
 12                 j++;
 13         }
 14         a[i]='\0';
 15 int len=strlen(a);
 16         printf("%s \nlen=%d\n",a,len);
 17 }
 18 int main()
 19 {
 20         char a[50],b[20];
 21         printf("enter strings\n");
 22         scanf("%19s%19s",a,b);
 23         my_strcat(a,b);
 24         return 0;
 25 
 26 
 27 }

