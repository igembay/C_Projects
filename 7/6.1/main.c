#include <stdio.h>

int main() {
   int k, s, m;
	scanf ("%d", &k);
		for (s=1, m=1; s<=k; m=m++*s++);
		printf ("%d ", m);
  return 0;
}
