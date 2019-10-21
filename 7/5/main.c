#include <stdio.h>
int main(){
    int A,B,C;
    scanf("%d%d",&A,&B);
    for(C=B; A<=B; A++)
        printf("%d ",C--);
    return 0;
}
