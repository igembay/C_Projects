#include <stdio.h>
int main(){
    int l, a;
    scanf("%d",&l);
    int i=0, j=l, m1[l], m2[l];
    while(j){
            scanf("%d",&a);
            m1[i++]=a;
            m2[--j]=a;
            if(m1[i]==m2[i])continue;
            else {printf("NO"); return 0;}
    }
    printf("YES");
    //printf(m1[l]==m2[l]?"YES\n":"NO\n");

    /*for(i=0; i<l; printf("%d ",m1[i++]));
    printf("\n");
    for(i=0; i<l; printf("%d ",m2[i++]));*/

    return 0;
}
