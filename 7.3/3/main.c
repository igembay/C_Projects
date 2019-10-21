#include <stdio.h>
int main(){
    int N,i=1,j;
    scanf("%d",&N);
    while(1){
        if(N<1)break;
        j=1;
        while(1){
            if(j>i)break;
            printf("%d ",j);
            j++;
        }
        printf("\n");
        i++;
        if(i>N)break;
    }
    return 0;
}
