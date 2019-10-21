#include <stdio.h>

int main(){
    int n, k, m[100];
    scanf("%d", &n);
    for(k=n/2; k<n; scanf("%d",m+k++));
    for(k=0; k<n/2; scanf("%d",m+k++));
    for(k=0; k<n; printf("%d ",m[k++]));
    return 0;
}
