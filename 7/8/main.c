#include <stdio.h>
int main(){
    int A,B,i,j=777;
    scanf("%d%d",&A,&B);
    for(; A<=B; A++,j++){
        for(i=777; i<=j; i++)printf("%5.d",A);
    }
    return 0;
}
