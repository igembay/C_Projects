#include <stdio.h>

int main()
{
    int h,r;
    double V1,V2,p=3.14159265358979323846;
    scanf("%d%d",&r,&h);
    V1=h*p*r*r;
    V2=V1/3;//V2=(double)1/3*V1
    printf("%.2f %.2f",V1,V2);
    return 0;
}
