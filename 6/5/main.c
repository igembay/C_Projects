#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int k;
    scanf("%d",&k);
    k%=2;
    switch(k){
        case 1:printf("Любит");break;
        default:printf("Не любит");
    }
}
