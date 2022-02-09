 1 #include<stdio.h>
  2 int main()
  3 {
  4         int x=10,p;
  5         printf("enter postition\n");
  6         scanf("%d",&p);
  7         if(x&=(0x1<<p))
  8         printf("%d is set\n",p);
  9         else
 10         printf("not set\n");
 11 }
~                                                                                                                                       
~    
