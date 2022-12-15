#include <stdio.h>
void display_1(int* age,int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ", age[i]);
    }
    printf("\n%p\n", age);
}
void display(int age1, int age2)
{
    printf("%d %p\n",age1,&age1);
    printf("%d %p\n",age2,&age2);
}
using namespace std;

int main(){
int ageArray[] = {2, 8, 4, 12};

//Passing second and thrid element to
//display()
    display(ageArray[1],ageArray[2]);
    return 0;
