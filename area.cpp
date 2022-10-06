#include <iostream>
using namespace std;
int
main ()
{
  float r, area, m, temp;
  
  printf ("please input r:");
  scanf ("%f", &r);
   if (r > 0){
       area = r * r * 3.1415;
       printf("area = %f ",area);
   
     m = 2 * r * 3.1415;
   printf("m = %f ", m);
   }
   else{ printf("r < 0");
       
   }
       
   return 0;
}
