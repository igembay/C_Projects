#include <stdio.h>
int main(){
    int A,B,i,j;
    scanf("%d%d",&A,&B);
    for(i=A; i<=B; i++){
        for(j=A; j<=A; j++)printf("%4d",i);
    }
    return 0;
}
