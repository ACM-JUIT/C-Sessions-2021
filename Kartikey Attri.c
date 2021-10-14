/* Code to find rough CGPA
made by Kartikey Attri */
#include<stdio.h>
main()
{
    float score;
    printf("enter your score here:");
    scanf("%f",&score);
 if(score>=99.5 && score<=100)
 {
 printf("perfect score");
 }
 else if(score>=90 && score<99.5)
 {
 printf("PASS, cgpa 9+");
 }
 else if(score>=80 && score<90){
 printf("PASS, cgpa 8+");
 }
 else if(score>=70 && score<80)
 {
 printf("PASS cgpa 7+");
 }
 else if(score>=60 && score<70){
 printf("PASS cgpa 6+");
 }
 else if(score>=50 && score<60){
 printf("PASS cgpa 5+");
 }
 else if(score>=40 && score<50){
 printf("PASS cgpa 4+");
 }
 else if(score>33 && score<40){
 printf("PASS cgpa 3.5+");
 }
 else if(score<33 && score>=0)
 {
printf("FAIL");
 }
 else
{
 printf("ERROR");
}
return 0;
}
