#include <stdio.h>
#include <limits.h>
int main() {
    int a=INT_MIN,b=INT_MIN+1;
    while (b != -9999){
        if(a>=b){printf("NO");return 0;}
        a=b;
        scanf("%d",&b);
    }
    printf("YES");
    return 0;
}
