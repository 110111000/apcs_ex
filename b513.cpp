#include <iostream>

using namespace std;
void is_prime(int a,int b){
    for(b=2;b<a;b++){
        if(a % b == 0){
        printf(" N \n");
       break;
        } 
    }
    if(b == a ){ 
        printf(" Y \n"); 
    };
}

int main()
{
int i,n,a,b;
scanf("%d",&n);
for( i=0;i<n;i++){
    scanf("%d",&a); 
    is_prime(a,b);
    
}
return 0;
}

