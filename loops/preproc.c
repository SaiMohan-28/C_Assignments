#include<stdio.h>
   #define pragma one
   #define pie 3.14
   #define os 1
   #undef pie
   
   int main()
   {
   #if(os == 1)
  printf("windows\n");
  #elif(os == 2)
  printf("mac\n");
  #endif
  return 0;
  }

