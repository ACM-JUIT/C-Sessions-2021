#include <stdio.h>
int main()
{
    int N;
    printf("Enter number: ");
    scanf("%d", &N);
    if(N % 2 == 0)
    {
        printf("%d is an Even Number.", N);
    }
    else
    {
        printf("%d is an Odd Number.", N);
    }
    
    return 0;
}