#include <stdio.h>
#include <float.h>
#include <limits.h>
int main ()
{
  short int;printf ("\n Min value of short int = %hd", SHRT_MIN);
  printf ("\n Max value of short int = %hd", SHRT_MAX);
  printf ("\n Size of short int = %d\n",sizeof(short int));

  unsigned short int usi = 0;
  printf ("\n Max value of unsigned short int = %hu", USHRT_MAX);
  printf ("\n Min value of unsigned short int = %hu", usi);
  printf ("\n Size of unsigned short int = %d\n",sizeof(unsigned short int));

  unsigned int ui = 0;
  printf ("\n Max value of unsigned int = %u", UINT_MAX);
  printf ("\n Min value of unsigned int = %hu", ui);
  printf ("\n Size of unsigned int = %d\n",sizeof(unsigned int));

  int;
  printf ("\n Min value of int = %d", INT_MIN);
  printf ("\n Max value of int = %d", INT_MAX);
  printf ("\n Size of int = %d\n",sizeof(int));

  long int;
  printf ("\n Min value of long int = %ld", LONG_MIN);
  printf ("\n Max value of long int = %ld", LONG_MAX);
  printf ("\n Size of long int = %d\n",sizeof(long int));

  unsigned long int uli = 0;
  printf ("\n Max value of unsigned long int = %lu", ULONG_MAX);
  printf ("\n Min value of unsigned long int = %lu", uli);
  printf ("\n Size of unsigned long int = %d\n",sizeof(unsigned long int));

  float;
  printf("\n Min value of float = %e",FLT_MIN);
  printf ("\n Max value of float = %e", FLT_MAX);
  printf ("\n Size of float = %d\n",sizeof(float));

  double;
  printf("\n Min value of double = %e",DBL_MIN);
  printf ("\n Max value of double = %e", DBL_MAX);
  printf ("\n Size of double = %d\n",sizeof(double));

  long double;
  printf ("\n Min value of long double = %Le", LDBL_MIN);
  printf ("\n Max value of long double = %Le", LDBL_MAX);
  printf ("\n Size of long double = %d\n",sizeof(long double));

  return 0;

}
