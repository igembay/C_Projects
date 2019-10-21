#include <stdio.h>
int main(){
    int a,b,c,x;
    scanf("%d%d%d",&a,&b,&c);
    x=a*100+b*10+c;
    printf(x==248||x==284||x==428||x==482||x==824||x==842?"open":"close");
    return 0;
}
