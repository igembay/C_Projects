#include <stdio.h>

int main() {
    int n, k=0, m[100], max, min;
    scanf("%d",&n);
    scanf("%d",&n); m[0] = max = min = n;
    while(scanf("%d", &m[++k]) != EOF) {
    //while(1 == scanf("%d", m+(++k))) {
        m[k]>max ? max=m[k] : 1;
        m[k]<min ? min=m[k] : 1;
    }
    for(n=0; n<k; n++) {
        if(m[n]==max) m[n]=min;
        else if(m[n]==min) m[n]=max;
        printf("%d ",m[n]);
    }
    return 0;
}
