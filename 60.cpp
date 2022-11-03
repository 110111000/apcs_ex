#include <iostream>

using namespace std;

int main()
{
    int a, i;
    scanf("%d", &a); //a = 60
    printf("60的因數: ");
    for(i=1;i<=a;i++){
        if(a  % i ==0){
           printf(" %d ", i); 
        }
    }
    return 0;

}
