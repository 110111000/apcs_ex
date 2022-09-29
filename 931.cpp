#include <stdio.h>

int
main ()
{
  int a, b, product;
  a = 16;
  b = 7;
  // Calculating product
  product = a >> 1;
  printf ("Product = %d \n", product);
  a = a >> 1;
  printf ("a = %d \n", (a = a >> 1));
  printf ("a = %d \n", (a = a >> 1));
  printf ("a = %d \n", (a = a >> 1));
  printf ("a = %d \n", (a = a >> 1));
  return 0;
}
