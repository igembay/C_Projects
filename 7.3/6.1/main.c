#include <stdio.h>
#include <limits.h>
int main() {
    int a=INT_MIN,b=INT_MIN+1;
    while (b != -9999){
        if(a>=b)break;
        a=b;
        scanf("%d",&b);
    }
    printf(b==-9999 ? "YES":"NO");
    return 0;
}
