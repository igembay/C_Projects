#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int age;
    scanf("%d", &age);
    if (age < 7) printf("����������");
    if (6 < age && age < 19) printf("��������");
    if (18 < age && age < 60) printf("�������");
    if (age > 59) printf("���������");
}
