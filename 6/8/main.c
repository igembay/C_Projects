#include <stdio.h>
int main(void){

  int age, height, weight;
  double bov_m, bov_f;
  char p;

  //printf("Vash pol?(m ili f)\n");
  scanf("%c",&p);

  //printf("Vash vozrast?(god)\n");
  scanf("%d", &age); // ��������� ����� �������� � ���������� age

  //printf("Vash rost?(cm)\n");
  scanf("%d", &height); // ���������  �������� � ���������� height

  //printf("Vash ves?(kg)\n");
  scanf("%d", &weight); // ��������� �������� � ���������� weight

  bov_m = 10*weight + 6.25*height - 5*age + 5;
  bov_f = 10*weight + 6.25*height - 5*age - 161;

  switch (p){
      case'f':printf("|  BMR  |\n");
              printf("|%7.2f|",bov_f);break;
      case'm':printf("|  BMR  |\n");
              printf("|%7.2f|",bov_m);break;
      default:printf("ERROR!");
  }
}
