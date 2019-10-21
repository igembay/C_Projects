#include <stdio.h>
int main(){
  int n, i=0;
  scanf("%d", &n);
  int m[n];
  while(i<n) scanf("%d",&m[i++]);
  i=0;
  while(i<n){
     if(m[i++]==m[--n])continue;
     else {printf("NO");return 0;}
  }
  printf("YES");
  return 0;
}
