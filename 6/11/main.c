#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int K;
    scanf("%d",&K);
    switch (K/10){
        case 1:printf("��� %d ���",K);break;
        default:switch(K%10){
            case 1:printf("��� %d ���",K);break;
            case 2:
            case 3:
            case 4:printf("��� %d ����",K);break;
            default:printf("��� %d ���",K);
        }
    }
    return 0;
}
