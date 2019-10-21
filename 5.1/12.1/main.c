#include <stdio.h>

int main() {
    double e = 2.5;
    int f = 2, m = 3;
    printf("%.5f\n", e+=1./(f*=m++));
    printf("%.5f\n", e+=1./(f*=m++));
    printf("%.5f\n", e+=1./(f*=m));
    return 0;
}
