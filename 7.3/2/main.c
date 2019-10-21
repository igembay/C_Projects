#include <stdio.h>
int main(){
    int n;
    while(1){
        scanf("%d",&n);
        if(n<0)continue;
        if(n==0)break;
        printf("%d ",n);
    }
    return 0;
}
