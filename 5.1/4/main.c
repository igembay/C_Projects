#include <stdio.h>

int main()
{
    int ri,ro,w;
    double S,Si,So,p=3.14159265358979323846;
    scanf("%d%d",&ri,&ro);
    w=ro-ri;
    Si=p*ri*ri*100;
    So=p*ro*ro*100;
    S=So-Si;
    printf("%d %.2f",w,S);
    return 0;
}
