#include <stdio.h>
#include <math.h>

int main()
{
    float x = 5, y = floor(x/2)+1;
    int i = 0, z;
    while (i < 20) {
        z = y * 2 - 1;
        printf("%d\n", z);
        y++;
        i++;
    }
    return 0;
}
