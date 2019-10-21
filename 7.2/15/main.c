#include <stdio.h>
int main(){
    int a,b,d=1;
    scanf("%d%d",&a,&b);
    while(d%a!=0||d%b!=0) d++;
    printf("%d",d);
    return 0;
}
