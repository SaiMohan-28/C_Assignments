1 #include<stdio.h>
  2 int main()
  3 {
  4         int x=10,p;
  5         printf("enter position\n");
  6         scanf("%d",&p);
  7         printf("%d\n",x^=(0x1<<p));
  8         return 0;
  9 
 10 }

