#include <stdio.h>
int main()
{
    int year;  //define year vaiable

    printf("Enter year: ");
    scanf("%d",&year);   //take input from user

//Conditions to test leap year
    if(year % 4 == 0 && year%100 !=0)
    {
        printf("%d is Leap year",year);
    }
    else if (year % 400 ==0)
    {
        printf("%d is a Leap Year",year);
    }
    else
    {
        printf("%d is not a Leap Year",year);
    }
}