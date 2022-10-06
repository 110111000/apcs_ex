#include <iostream>
using namespace std;
int
main ()
{
  int a, b, s,  temp;
  printf("input a:");
  scanf("%d", &a);
  printf("input b:");
  scanf("%d", &b);
  printf("input s:");
  scanf("%d", &s);
  
 if (s == a+b){
 printf("right ");
 }else{
 //(s >  a+b);
 printf("wrong");
 }
  
  
  return 0;
}
