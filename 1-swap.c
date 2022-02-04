 #include<stdio.h>
   void ref(int *p, int *p1)
   {
           int temp=0;
           temp=*p;
           *p=*p1;
           *p1=temp;
   }
  int main()
  {
          int a,b;
          printf("enter 2 numbers:\n");
          scanf("%d%d",&a,&b);
          ref(&a,&b);
          printf("main a=%d\tb=%d\n",a,b);
       return 0;
	}
~       
