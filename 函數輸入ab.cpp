#include <iostream>
using namespace std;



int fun(int a,int b){
   if (a < 0){
        b = 1;
    }else if(a > 0 ){
        b = 3;
    }else if(a == 0){
        b = 5;
    }
    return b;
}
    
int main(){
    int a,b;
    printf("please input two number \n");
    scanf("%d",&a);
    //scanf("%d",&b);
    b = fun(a,b);
    printf("b= %d\n",b );
    cout<<"Hello World";
    
    return 0; 
}
