#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "");
  char num;
  scanf("%c",&num);

  switch (num) {
      case '1': printf("�����"); break;
      case '2': printf("�������������������"); break;
      case '3': printf("�����������������"); break;
      case '4': printf("������"); break;
      case '5': printf("�������"); break;
      default: printf("������� ���� ������ �� 1 �� 5"); break;
  }

    return 0;
}
