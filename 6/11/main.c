#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int K;
    scanf("%d",&K);
    switch (K/10){
        case 1:printf("ћне %d лет",K);break;
        default:switch(K%10){
            case 1:printf("ћне %d год",K);break;
            case 2:
            case 3:
            case 4:printf("ћне %d года",K);break;
            default:printf("ћне %d лет",K);
        }
    }
    return 0;
}
