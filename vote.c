#include<stdio.h>

int main(){
    int age;
    printf("Enter you age\n");
    scanf("%d",&age);
    printf("You have entered %d as your age\n",age);
    if (age>=18)
    {
        printf("You can Vote\n");
    }
    else{
        printf("You cannot vote");
    }
    return 0;
}