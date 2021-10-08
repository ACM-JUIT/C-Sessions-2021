#include<stdio.h>
 int main(){
     int P , T ;
     double R , si;

     printf("enter principal amount");
     scanf("%d",&P);

     printf("enter rate ");
     scanf("%lf",&R);

     printf("enter time");
     scanf("%d",&T);

     si = (P * R * T)/100 ;
     printf(" interest is %.2lf",si);
     return 0 ;
 }
