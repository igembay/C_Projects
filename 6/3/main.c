#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "");
  char s;
  scanf("%c",&s);

  switch (s) {
    case 'l' : printf("���� ���������, ���� ������!\n"); break;
    case 'f' : printf("� ���� � ���� ���������!\n"); break;
    case 'r' : printf("���� ���������, ���� ������!\n");
  }

  return 0;
}
