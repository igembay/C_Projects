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
        case 0: printf("�����"); break;
        case 1: printf("�� �����"); break;
        case 2: printf("������"); break;
        case 3: printf("��������"); break;
        case 4: printf("� ������ �������"); break;
        case 5: printf("� ����� �����"); break;
    }
    putchar('\n');
    return 0;
}
