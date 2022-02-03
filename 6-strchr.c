#include<stdio.h>
  3 int my_strchr(char a[],char c)
  4 {
  5         int c1=-1,i;
  6         for(i=0;a[i]!='\0';i++)
  7         {
  8                 if(a[i]==c)
  9                 {
 10                         c1=i;
 11                         break;
 12                 }
 13         }
 14         return c1;
 15 }
 16 int main()
 17 {
 18         char a[100],c1;
 19         printf("enter string:\n");
 20         scanf("\n%[^\n]s",a);
 21         printf("enter character:\n");
 22         scanf(" %c",&c1);
 23         my_strchr(a,c1);
 24         if(my_strchr(a,c1)>=0)
 25                 printf("index is :%d\n",my_strchr(a,c1));
 26         else printf("not found\n");
 27 }
~                      
