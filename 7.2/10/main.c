#include <stdio.h>
int main(void) {
  int n, c = 0;
  scanf("%d", &n);
  while(n/=2) printf("%d ", ++c);
}
