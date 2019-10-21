#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,d,e,f,h;
    scanf("%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&h);
    printf("%.2f",a/(b*(c/(d*(e/(f*h))))));
    return 0;
}
