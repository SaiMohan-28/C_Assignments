  #include<stdio.h>
   int main()
   {
           int a[10],big,small,i,big1,small1;
           printf("enter numbers:\n");
           for(i=0;i<10;i++)
           {
                   scanf("%d",&a[i]);
           }
          big=a[0];
          small=a[0];
          for(i=1;i<10;i++)
          {
          if(a[i]>big)
          {
          big=a[i];
          big1=i;
          }
           if(a[i]<small)
           {
         small=a[i];
          small1=i;
           }
          }
          printf("big is :%d\t big index:%d\t small is:%d\t small index:%d\n",big,big1,small,small1);
         return 0;
  }

