#include<stdio.h>
int main()
{
 printf("FIBONACCI SERIES");
 int n;
 printf("\n\nEnter the number of terms you want in the fibonacci series: ");
 scanf("%d", &n);
 int a=0;
 int b=1;
 int c=2;
 int sum =0;
 printf("%d, %d", a,b);
 while(c<n){
	sum = a+b;
	printf(", %d", sum);
	a=b;
	b=sum;
	c+=1;
}
}
