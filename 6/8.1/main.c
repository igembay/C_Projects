#include <stdio.h>

int main(){
  char sex;
  int age, height, weight;
  scanf("%c%d%d%d", &sex, &age, &height, &weight);

  double bov = 10*weight + 6.25*height - 5*age;

  switch (sex) {
      default : printf("ERROR!"); return 0;
      case 'm' : bov += 5; break;
      case 'f' : bov -= 161;
  }
  printf("|  BMR  |\n|%7.2f|", bov);
  return 0;
}
