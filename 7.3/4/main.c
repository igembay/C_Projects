#include <stdio.h>
int main(){
    int n,f=0;
    while(1){
        scanf("%d",&n);
        if(n==-9999)break;
        if(n>0){f=777;continue;}
        if(n<0){f=0;break;}
        }
    if(f)printf("YES");
    else printf("NO");
    return 0;
}
