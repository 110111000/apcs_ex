#include <stdio.h>

int
main (void)
{
  int x, y;
  int bool_value;

  x = 8;
  y = 2;

  bool_value = ( x > 7 &&  x < 10 );
  printf (" x > y ==> %d \n ", bool_value);
  bool_value = (x < y);
  printf (" x < y ==> %d \n ", bool_value);
   bool_value = ( x > 5 || x < 4);
  printf (" x > y ==> %d \n ", bool_value);
   bool_value = !(x < 5 && x < 10);
  printf (" x > y ==> %d \n ", bool_value);
 
}
