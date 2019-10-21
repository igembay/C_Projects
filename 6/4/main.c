#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int k;
    scanf("%d",&k);
    switch(k){
        case 1:printf("плохо");break;
        case 2:printf("неудовлетворительно");break;
        case 3:printf("удовлетворительно");break;
        case 4:printf("хорошо");break;
        case 5:printf("отлично");
    }
}
