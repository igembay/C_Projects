#include <stdio.h>
int main(){
    int n, a, i = 0, j = 0;
    scanf("%d", &n);
    int m[n], m2[n];
    while(i + j < n) {
        scanf("%d", &a)
        if(a % 2) m2[j++] = a;
        else m[i++] = a;
    }
    for(j; i < n; ) m[i++] = m2[j++]
    printf("Hello world!\n");
    return 0;
}
