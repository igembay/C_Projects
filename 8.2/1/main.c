#include <stdio.h>

int main(void) {

  int arr[4][8] = {0};
  int k = 1;

  for (int i = 0; i < 4; i = i + 1){
    for(int j = 0; j < 8; j = j + 1){
      arr[i][j] = k;
      k = k + 1;
    }
  }

  for (int i = 0; i < 4; i = i + 1){
    for(int j = 0; j < 8; j = j + 1){
      printf("%d\t", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}
