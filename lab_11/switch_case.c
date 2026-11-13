#include<stdio.h>
int main()
{
   printf("I am Rifa khan\n");
   int a=10, b=20;
   int c;
   printf ("Value of a is %d and value of b is %d\n", a,b);
   c=a+b;
   a=c-a;
   b=c-b;
   printf("values of a is %d and value of b is %d\n",a,b);
   return 0;
}
