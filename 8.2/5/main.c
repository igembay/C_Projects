#include <stdio.h>

int main() {
    int n, i, j, k;
    scanf("%d",&n);
    int m[n][n];
    for(i=0; i<n; i++)
        for(j=i, k=1; j<n; j++, k++)
            m[i][j]=m[j][i]=k;
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++)
            printf("%d ",m[i][j]);
        printf("\n");
    }
    return 0;
}
