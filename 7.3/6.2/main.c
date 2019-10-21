#include <stdio.h>
#include <limits.h>
int main(){
    int a, b=INT_MIN;
    while (1){
        scanf("%d", &a);
        if(a == -9999){printf("YES");break;}
        if(a <= b){printf("NO");break;}
        b = a;
    }
    return 0;
}
