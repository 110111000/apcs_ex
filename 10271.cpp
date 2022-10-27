#include <stdio.h>

int
main ()
{

  int a, b;
  for (a = 1; a < 10; a++)
    {
      for (b = 1; b < 10; b++)
	{
	  printf ("%2d*%2d = %2d", a, b, a * b);
	} 
      printf ("\n");
      //printf ("\n");
    //    printf ("\n");
      
    }


  return 0;
}
