#include <stdio.h>

int main() {
    int n, i=-1, j;
    scanf("%d", &n);
    while(++i < n) {
        j=-1;
        while(++j < n) {
            printf("%d ", i%2 ? n-j : j+1);
        }
        printf("\n");
    }
}
