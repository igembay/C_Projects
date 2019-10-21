#include <stdio.h>
int main(){
    int N=1,M=0,m=0;
    while(N){
        scanf("%d",&N);
        if(N>M) M=N;
        if(m<N) m=N;
        //N<m?M=m:1;
        //M<N?M=N:1;
        //m>N?m=N:1;
    }
    printf("%d %d",M,m);
    return 0;
}
