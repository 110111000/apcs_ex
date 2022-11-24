#include <stdio.h>

int main()
{
    char s[256];
    int n,i,ii;
    scanf("%s", s);
    printf("SS:%s\n",s);
    for(i=0;i<n && s[i] !='\0'; i++){
        printf("%c ",s[i]);
    }
    
    printf("\n");
    printf("last index = %d\n",i);
    ii = i;
    for(i=ii-1;i>=0;i--){
        printf("%c ",s[i]);
    }
    
    
   
    return 0;
}
