#include <stdio.h>

int main()
{

    float H,C,T;
    printf("Enter the hardness, carbon content and tensile strength:\n");
    scanf("%f %f %f", &H, &C, &T);

    if(H>50 && C < 0.7 && T >5600)
        printf("Grade 10");
    else if(H>50 && C < 0.7 && T <=5600)
        printf("Grade 9");
    else if(H<=50 && C < 0.7 && T >5600)
        printf("Grade 8");
    else if(H>50 && C >= 0.7 && T >5600)
        printf("Grade 7");
    else if(H>50 || C < 0.7 || T >5600)
        printf("Grade 6");
    else
        printf("Grade 5");

    return 0;

}
