# :star: C Sessions 2021 :star:
This is a repository to store your hardwork practiced in the C Sessions organised by ACM-JUIT.
<br>
## :gear: Follow these steps as presented in the Github Workshop:
- **Fork this Repository**
- **Clone your forked Repository on to your machine**
- **Do the needful changes**
- **Push the changes to your forked repo, and**
- **Create a valid Pull Request with an appropriate message**

The managers of the repository will then review your Pull Request and merge your code.

#include<stdio.h>
int main()
{
 printf("Program to create a FIBONACCI SERIES - by Shubh Saxena");
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
