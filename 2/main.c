#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    system("cls");
    scanf("%f", &x);
    y = rint(x/2+1);
    printf("%.0f\n", y);
    return 0;
}
