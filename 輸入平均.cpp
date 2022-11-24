#include <iostream>

using namespace std;

int
main ()
{
  int a[10];
  int n, i;
  int sum=0;
  int avg=0;
  scanf ("%d", &n);
  for (i = 0; i < n; i++){
    scanf ("%d", &a[i]);
    }
  for (i = 0; i < n; i++){
      printf ("%d ", a[i]);
      sum = sum + a[i];
      avg = sum / 5;
    }
  printf ("\nsum=%d", sum);
  printf ("\navg=%d", avg);
  



  return 0;
}
