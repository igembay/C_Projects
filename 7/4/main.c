#include <stdio.h>
int main(){
    int K,M,i=0;
    scanf("%d%d",&K,&M);
    for(; K<=M; ++K<2? : (printf("%d ",K-1), i++));
    printf("\n%d",i);
    return 0;
}
