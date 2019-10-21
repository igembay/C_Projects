#include <stdio.h>
int main() {
    int k=1,n;
    double f=1,e=1;
    scanf("%d", &n);
    while(k<=n) f/=k++, e+=f;
    printf("%.50f",e);
    return 0;
}
