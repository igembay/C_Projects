#include <stdio.h>

int main() {
    int a,i=0;
  while (1) {
      scanf("%d",&a);
      if ((a==-9999)&&(i!=0)) {printf("YES"); break;}
      if ((a<0)||(a==-9999)) {printf("NO"); break;}
      i++;
  }
  return 0;
}
