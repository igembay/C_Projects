#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int age;
    scanf("%d", &age);
    if (age < 7) printf("дошкольник");
    if (6 < age && age < 19) printf("школьник");
    if (18 < age && age < 60) printf("рабочий");
    if (age > 59) printf("пенсионер");
}
