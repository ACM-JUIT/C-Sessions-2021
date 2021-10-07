#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n, rem;
    printf("Enter a number\n");
    scanf("%d",&n);
    rem = n%2;
    if(rem==0)
    {
        printf("%d is even.",n);
    }
    else 
    {
        printf("%d is odd.",n);
    }
   return 0;
}