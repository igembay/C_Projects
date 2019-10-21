#include <stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d%d %c",&a,&b,&c);
    switch(c){
        case'+':printf("%.2f",(double)a+b);break;
        case'-':printf("%.2f",(double)a-b);break;
        case'*':printf("%.2f",(double)a*b);break;
        case'/':
            switch(b){
                case 0:printf("ERROR!");break;
                default:printf("%.2f",(double)a/b);break;
            }
            break;
        default:printf("ERROR!");
    }
}
