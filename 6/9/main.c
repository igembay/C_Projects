#include <stdio.h>
int main(){
    int m,d,x=0;
    scanf("%d%d",&m,&d);
    switch(m){
        case 12: x+=30;
        case 11: x+=31;
        case 10: x+=30;
        case 9: x+=31;
        case 8: x+=31;
        case 7: x+=30;
        case 6: x+=31;
        case 5: x+=30;
        case 4: x+=31;
        case 3: x+=28;
        case 2: x+=31;
        case 1: x+=d;
        default: printf("%d",x);
    }
}
