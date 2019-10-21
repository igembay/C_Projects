#include <stdio.h>
int main(){
    int N,i=0;
    scanf("%d",&N);
    while(N>0){
        N/=10;
        i++;
    }
    printf("%d",i);
}
