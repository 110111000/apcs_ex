#include <iostream>

using namespace std;

int main()
{
int a,b;
scanf("%d",&a); 
for(b=2;b<a;b++){
        if(a % b == 0){
        printf(" N \n");
       break;
        } 
}
        if(b == a ){ 
        printf(" Y \n"); 
        }
return 0;
}

 
