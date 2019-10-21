#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int N;
  srand(time(NULL));
  scanf("%d",&N);
  printf("%d",rand()%(N+1));
}
