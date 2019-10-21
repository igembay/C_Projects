#include <stdio.h>
int main(){
    int N,i=1;
    scanf("%d",&N);
    while(i*i<=N){
        printf("%d ",i*i);
        i++;
    }
    return 0;
}
