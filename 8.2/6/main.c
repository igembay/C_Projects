#include <stdio.h>

int main(){

    int N, i, j, A = 0, B = 0;
    scanf ("%d", &N);
    int ar[N][N];

    for (i = 0; i < N; i++)
        for (j = 0; j < N; scanf ("%d", &ar[i][j++]));

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
        if (i < j)
            A += ar[i][j];
        if (i + j >= N)
            B += ar[i][j];
        }
    }

    A < B ? printf("%d %d", A, B) : printf("%d %d", B, A);
    return 0;
}
