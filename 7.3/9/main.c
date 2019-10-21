#include <stdio.h>

int main() {
    int a, flag = 0, sum = 0;
    while (1)
    {
        scanf("%d", &a);
        if (!a)
        {
            flag = (flag + 1)%2;
        }
        if (flag) sum=sum + a;
        if (a==-9999) break;
    }
    printf("%d", sum);
}
