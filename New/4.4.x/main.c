#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int S,E;
  scanf("%d %d",&S,&E);
  srand(time(NULL));
  printf("%d",S+rand()%(E-S+1));
  return 0;
}
