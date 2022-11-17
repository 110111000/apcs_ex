#include <iostream>

using namespace std;

int add(int x, int y){
    return x+y;}
int  sub(int x, int y){
    return x-y;}
int  multiply(int x, int y){
    return x*y;}
int  divide(int x, int y){
    return x/y;
}
    
int main(){
    int a,b;
    
    printf("please input two number \n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("a + b = %d\n",add(a,b));
    printf("a - b = %d\n",sub(a,b));
    printf("a * b = %d\n",multiply(a,b));
    printf("a / b = %d\n",divide(a,b));
    cout<<"Hello World";

    return 0;
}
