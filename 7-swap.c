 1 #include<stdio.h>
  2 int main()
  3 {
  4         int a,b;
  5         printf("enter 2 num\n");
  6         scanf("%d%d",&a,&b);
  7         a=a^b;
  8         b=a^b;
  9         a=a^b;
 10         printf("After swapping a=%d,b=%d\n",a,b);
 11 }

