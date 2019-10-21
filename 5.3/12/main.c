#include <stdio.h>
int main(){
    int X,X3,X2,X1,X0;
    scanf("%d",&X);
    X3=(X/1000+7)%10;
    X2=(X/100%10+7)%10;
    X1=(X/10%10+7)%10;
    X0=(X%10+7)%10;
    printf("%d%d%d%d",X1,X0,X3,X2);
}
