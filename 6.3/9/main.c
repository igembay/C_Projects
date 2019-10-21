#include <stdio.h>
int main(){
    int d,m;
    scanf("%d%d",&d,&m);
    printf( (m>0) && (m<13) && (d>0) && (d<31+((m-m/8)%2)-(m==2)) ? "correct":"error");
    return 0;
}
