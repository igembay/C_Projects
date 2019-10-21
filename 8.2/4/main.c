#include <stdio.h>

int main() {
    int n, i=0, j=0;
    scanf("%d", &n);

    while(++i<=n) {
        if(i%2)
            while(++j<=n) printf("%d ",j);
        else
            while(--j) printf("%d ",j);
        printf("\n");
    }

    return 0;
}
