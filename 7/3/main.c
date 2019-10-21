#include <stdio.h>
int main(){
    int K,M,i=0;
    scanf("%d%d",&K,&M);
    for(K--; K++ < M; K>0? i++, printf("%d ",K) : "");
    printf("\n%d",i);
    return 0;
}
