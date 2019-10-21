#include <stdio.h>
int main(){
    int k,i,f;
    scanf("%d",&k);
    for(i=f=1; i<=k; i++)
        f*=i;
    printf("%d",f);
    return 0;
}
