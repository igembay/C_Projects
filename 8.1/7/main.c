#include <stdio.h>

int main() {
    int n,i=0,s=0,k;
    scanf("%d", &n);
    while(i++<n) {scanf("%d", &k); s+=k;}
    printf("%.2f",(double)s/n);
    return 0;
}
