#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,h,m;
    scanf("%d",&s);
    h=s/60/60;
    m=s/60%60;
    printf("%d %d",h,m);
    return 0;
}
