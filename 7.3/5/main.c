#include <stdio.h>
#include <limits.h>
int main(){
    int N,a,b=INT_MIN;
    scanf("%d",&N);
    while(N--){
        scanf("%d",&a);
        if(b!=a)printf("%d ",b=a);
    }
    return 0;
}
