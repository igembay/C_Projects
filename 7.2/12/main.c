#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    do printf("%d",N%10);
    while(N/=10);
    return 0;
}
