#include <stdio.h>
int main(){
    int b1,b2,b3,b4;
    scanf("%d%d%d%d",&b1,&b2,&b3,&b4);
    printf(1024==b1*1000+b2*100+b3*10+b4?"open":"close");
    return 0;
}
