#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int x;
    scanf("%d",&x);
    if (x<7) printf("дошкольник");
    else if (x<19) printf("школьник");
    else if (x<60) printf("рабочий");
    else printf("пенсионер");
    return 0;
}
