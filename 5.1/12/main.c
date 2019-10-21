#include <stdio.h>

int main()
{
    double a=2*3,b=a*4,c=b*5,d=c*6,e1,e2,e3;
    e1=2+1/2+1/a+1/b;
    e2=e1+1/c;
    e3=e2+1/d;
    printf("%.5f\n%.5f\n%.5f",e1,e2,e3);
    return 0;
}
