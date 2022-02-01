//Program to Explain all data types including signed and unsigned.



 #include<stdio.h>
   int main()
   {
           int a=1;
           unsigned int b=2;
           short signed int c=3;
           short unsigned int d=4;
           long signed int e=5;
           long unsigned int f=6;
          signed char ch='a';
          unsigned char ch1 ='b';
          float g=1.2;
          double h=12.0;
          long double i=13.12;
  
          printf("integer and size is             :       %d\t%ld\n",a,sizeof(a));
          printf("unsigned int and size is        :       %u\t%ld\n",b,sizeof(b));
          printf("short signed int and size is    :       %hi\t%ld\n",c,sizeof(c));
          printf("short unsigned int and size is  :       %hu\t%ld\n",d,sizeof(d));
          printf("long signed int and size is     :       %li\t%ld\n",e,sizeof(e));
          printf("long unsigned int and size is   :       %lu\t%ld\n",f,sizeof(f));
          printf("signed char and size is         :       %c\t%ld\n",ch,sizeof(ch));
          printf("unsigned char and size is       :       %c\t%ld\n",ch1,sizeof(ch1));
          printf("float and size is               :       %f\t%ld\n",g,sizeof(g));
          printf("double and size is              :       %lf\t%ld\n",h,sizeof(h));
          printf("long double and size is         :       %Lf\t%ld\n",i,sizeof(i));
          return 0;
  }

