  #include<stdio.h>
   int main()
   {
           double a,b;
           printf("enter 2 values\n");
           scanf("%le%le",&a,&b);
           printf("chooose one\na.addition\ns.subtraction\n");
           char c;
           scanf("\n%c",&c);
          switch(c)
          {
                  case 'a':printf("%le\n",a+b);
                          break;
                  case 's':printf("%le\n",a-b);
                          break;
                  default:printf("no action\n");
          }
  return 0;
  }
~       
