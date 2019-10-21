#include <stdio.h>
#include <math.h>
int main(){
    int x1,y1,x2,y2,r1,r2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    if (sqrt(x1*x1+y1*y1)<sqrt(x2*x2+y2*y2))
        printf("1");
    else printf("2");
    return 0;
}
