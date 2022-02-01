//Program to explain all opeartors using different data types.
#include<stdio.h>
   void arithmetic(void);
   void relational(void);
   void bitwise(void);
   void inc(void);
   void conditional(void);
   
   int a=10;//assignment operator
   float b=1.2;
 int c=28,d=12;
  void arithmetic(void)
  {
          printf("Addition=%f\n",a+b);
          printf("Sub=%f\n",a-b);
          printf("Mul=%f\n",a*b);
          printf("Div=%f\n",a/b);
  }
  void relational(void)
  {
          if((a>d)&(a<c)||d!=0)//relational and logical operators
          printf("hello\n");
          else
          printf("welcome\n");
  }
  void bitwise(void)
  {
          int result= ~a & c;
          printf("%d\n",result);
          int result1= a<<2;
         printf("%d\n",result1);
  }
  void inc(void)
  {
          a++;
          ++c;
         printf("a=%d\tc=%d\n",a,c);
  }
  void conditional(void)
  {
          a>c?printf("a is greater\n"):printf("c is geater\n");
  }
 	int main()
  {
          arithmetic();//arithmetic operators
          relational();
          bitwise();//bitwise operators
          inc();//inc nd dec
          conditional();//conditional operators
          return 0;
  }
 

                                                                                                        

