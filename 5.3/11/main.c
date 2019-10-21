#include <stdio.h>
int main(){
    int k,x1,x2,x3,x4;
    scanf("%d%d%d%d%d",&k,&x1,&x2,&x3,&x4);
    printf("%d %d %d %d",(x1+k)%26,(x2+k)%26,(x3+k)%26,(x4+k)%26);
}
