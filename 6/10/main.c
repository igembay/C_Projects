#include <stdio.h>
int main(){
    int k,X,P=1;
    scanf("%d%d",&k,&X);
    switch(k){
        default:printf("ERROR!");return 0;
        case 4:P=X/1000;
        case 3:P*=X/100%10;
        case 2:P*=X/10%10;
        case 1:P*=X%10;
    }
    printf("%d",P);
    return 0;
}
