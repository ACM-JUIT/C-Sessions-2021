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