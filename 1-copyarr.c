   #include<stdio.h>
   int main()
   {
           int a[10],b[10];
   
           for(int i=0;i<5;i++)
           {
           printf("Enter  element\n");
           scanf("%d",&a[i]);
          }
          for(int i=0;i<5;i++)
          {
          b[i]=a[i];
          }
          for(int i=0;i<5;i++)
          {
          printf("%d\n",b[i]);
          }
  return 0;
  
  }
~             
