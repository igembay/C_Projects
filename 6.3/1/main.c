#include <stdio.h>

int main(void) {

  int x = 0;
  scanf("%d", &x);

  if ( x < 0 ) {
    printf("Negative!\n");
  } else {
    if ( x == 0 ){
      printf("Zero!\n");
    } else {
      printf("Positive!\n");
    }
  }
  return 0;
}
