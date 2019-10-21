#include <stdio.h>
int main() {
    int K,M,i;
    scanf("%d%d",&K,&M);
    for (i=K = K>1? K:1; K<=M; printf("%d ",K++));
    printf("\n%d",K-i);
}
