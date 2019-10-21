#include <stdio.h>
int main(){
    double x,y;
    scanf("%lf%lf",&x,&y);
    printf("%d",(x>0&&y>0)+(x<0&&y>0)*2+(x<0&&y<0)*3+(x>0&&y<0)*4);
    return 0;
}
