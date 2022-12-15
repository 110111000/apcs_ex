#include <iostream>

using namespace std;
#include <stdio.h>
void display(int* age1, int age2)
{
    printf("%d %p\n", *age1,age1);
    *age1 = *age1 + 10;
    printf("%d\n", age2);
}

int main()
{
    int ageArray[] = {2, 8, 4, 12};
    int a;
    scanf("%d", &a);
    printf("a = %d \n",a);
    
//Passing second and thrid element to
//display()
    
    display(&ageArray[1],ageArray[2]);
    printf("%d %p \n",ageArray[1],&ageArray[1]);
    return 0;
}
