#include <stdio.h>

int main() {
    int n, m[100], i=0, f=0;
    scanf("%d", &n);
    while(i < n) scanf("%d", &m[i++]);
    for(i=0; ++i < n-1; )
        if(m[i]<m[n-1] && m[i]>m[0]) printf("%d ",m[i]), f++;
    if(!f) printf("0");
    return 0;
}
