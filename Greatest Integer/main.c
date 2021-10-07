/* Program to find the greatest Integer of out of 4 integers
 *Author: Aayush Girdhar
 *Dated: 06/10/2021
*/
#include<stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d\n %d\n %d\n %d", &a, &b, &c, &d);
    int m1 = a>b ? a : b;
    int m2 = c>d ? c : d;
    m1>m2 ? printf("%d", m1) : printf("%d", m2);

    return 0;
}