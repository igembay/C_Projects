#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int k;
    scanf("%d",&k);
    switch(k){
        case 1:printf("�����");break;
        case 2:printf("�������������������");break;
        case 3:printf("�����������������");break;
        case 4:printf("������");break;
        case 5:printf("�������");
    }
}
