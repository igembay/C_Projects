#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int x;
    scanf("%d",&x);
    if (x<7) printf("����������");
    else if (x<19) printf("��������");
    else if (x<60) printf("�������");
    else printf("���������");
    return 0;
}
