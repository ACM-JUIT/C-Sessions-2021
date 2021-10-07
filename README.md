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
#include <stdio.h>

int main(void) {

  int i;

long ix;

short s;

unsigned u;

float x;

double dx;

char c;
    scanf("%i",&i);
    scanf("%if",&ix);
        scanf("%hi",&s);
        scanf("%u",&u);
        scanf("%f",&x);
        scanf("%lf",&dx);
        scanf("%c",&c);
    printf("%i\n%i\n%hi\n%u\n%.4f\n%.10lf\n% %\n",i,ix,s,u,x,dx,c);
  
  
    return 0;
}