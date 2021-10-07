#include<stdio.h>

int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int cp,sp;
    cp=num1;
    sp=num2;
    float result;
    result=sp-cp;
    if (sp>cp)
    {
        printf("profit");
        printf("%f",result);
    }else{
        printf("loss");
        printf("%f",result);
    }
    return 0;
    }