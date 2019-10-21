#include <stdio.h>
int main(){
    int n, a, i = 0, j = 0;
    scanf("%d", &n);
    int m[n];
    while(i + j < n) {
        scanf("%d", &a);
        if(a%2) m[j++] = a;
        else printf("%d ", a), i++;
    }
    for(i = 0; i < j; printf("%d ",m[i++]));
    return 0;
}
