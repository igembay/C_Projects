#include <stdio.h>
int main(){
    double a,b;
    char c;
    scanf("%s%lf%lf",&c,&a,&b);
    switch(c){
        case'+':printf("%.2f",a+b);break;
        case'-':printf("%.2f",a-b);break;
        case'*':printf("%.2f",a*b);break;
        case'/':printf("%.2f",a/b);break;
        default:printf("ERROR!");
    }
}
