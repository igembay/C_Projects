#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int k;
    const int baza = 3;
    scanf("%d", &k);

    switch ((k + 1) % baza)
    {
        case 0: printf("Любит"); break;
        case 1: printf("Не любит"); break;
        case 2: printf("Плюнет"); break;
        case 3: printf("Поцелует"); break;
        case 4: printf("К сердцу прижмет"); break;
        case 5: printf("К чёрту пошлёт"); break;
    }
    putchar('\n');
    return 0;
}
