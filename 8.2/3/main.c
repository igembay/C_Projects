#include <stdio.h>

int main() {
    int n, m, i=-1, j, ms[10][10];
    scanf("%d",&n); scanf("%d",&m);
    for(; ++i<n; )
        for(j=0; j<m; scanf("%d",&ms[i][j++]));
    for(j=-1; ++j<m; ) {
        for(i=0; i<n; printf("%d ",ms[i++][j]));
        printf("\n");
    }
    return 0;
}
