#include <stdio.h>

int main(void) {
  int n, i = 0;
  scanf("%d", &n);
  int m[n];

  while (i < n) scanf("%d", m + i++);
  while (i) printf("%d ", (--i)[m]);
}
