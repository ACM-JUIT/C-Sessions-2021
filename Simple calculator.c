#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int sum;
    int diff;
    int product;
    int division;

    a = 10;
    sum=0;
    diff=0;
    product=1;
    division=1;

    printf("\t Simple Calculator");
    printf("\n \n");
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("\n");
    printf("Enter the value of b:");
    scanf("%d",&b);
    sum=a+b;
    printf("\n Sum of a and b is : %d",sum);
    diff=a-b;
    printf("\n Diff of a and b is : %d",diff);
    product=a*b;
    printf("\n Product of a and b is : %d",product);
    division=a/b;
    printf("\n Division of a and b is : %d",division);
    printf("\n \n");

    return 0;
}
