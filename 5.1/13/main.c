#include <stdio.h>
#include <math.h>

int main()
{
    int x,a=2,b=a*3,c=b*4,d=c*5;
    scanf("%d",&x);
    printf("%f\n%f",exp(x),1+x+pow(x,2)/a+pow(x,3)/b+pow(x,4)/c+pow(x,5)/d);
}
