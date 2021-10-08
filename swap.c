#include<stdio.h>
int main()
{
   int a,b;
   printf("Enter the two integers:");
   scanf("%d %d",&a,&b);
   //Swapping the two without using a third variable
   a=a+b;
   b=a-b;
   a=a-b;
   printf("%d %d",a,b);
   return 0;
   }
