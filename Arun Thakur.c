#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    if (n%2!=0)
        printf("%d is Odd Number",n);
    else
        printf("%d is Even Number\n",n);
    return 0;
}
