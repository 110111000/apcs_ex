#include <stdio.h>
using namespace std;
#if 0
int F(int n)
{
    int tmp=1;
    for(int i=n;i>=1;i--)
        tmp*=i;
        return tmp;
}
#else
#if 0
n! = n * (n-1) * (n-2)* ... * 3 * 2 * 1

n! = n * (n-1)!

f(n) = n * f(n-1)
#endif
#if 0
sum(n) = n + (n-1) + (n-2) + ....+ 3 + 2 + 1

sum(n) = n + (n-1)!

sum(n) = n + sum(n-1)!
#endif
int F(int n) 
{
    if (n>=1)
    return n*F(n-1);
    else
        return 1;
}
int S(int n) 
{
    if (n>=1)
    return n+S(n-1);
    else
        return 1;
}
#endif

int main(){
    int a;
    for(a=1;a<=10;a++){
        printf("%d! = %d\n",a,F(a));
    }
    for(a=1;a<=10;a++){
        printf("%d! = %d\n",a,S(a));
    }
    return 0;
}
