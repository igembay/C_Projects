#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int N;
  scanf("%d\n",&N);
  srand(time(NULL));
  printf("%d",rand()%(N+1));
}
