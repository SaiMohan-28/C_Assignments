1 #include<stdio.h>
  2 int main()
  3 {
  4         int x=12345678;
  5         if(x & (0x1<<7))
  6         printf("set\n");
  7         else
  8         printf("not set\n");
  9         return 0;
 10 }
~    
