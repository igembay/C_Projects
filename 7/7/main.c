#include <stdio.h>
int main(){
    int N,A=1,B=1,C=1,i=3;
    scanf("%d",&N);
    for(; i<=N; i++){
        A=B+C, C=B, B=A;
    }
    printf("%d",A);
    return 0;
}
