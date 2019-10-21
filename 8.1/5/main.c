#include <stdio.h>

int main() {
    int n, m[100]={0}, i = 0, j = -1, f = 0;
    scanf("%d", &n);
    //for()
    while(i < n-1) scanf("%d", &m[i++]);
    scanf("%d", &n);
    while(++j < i) {
            if(m[j] < n) {printf("%d ", m[j]); f++;}
    }
    if(!f) printf("0");
    return 0;
}
