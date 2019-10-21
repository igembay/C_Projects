#include <stdio.h>

int main()
{
  int minutes, bill;
  scanf("%d", &minutes);

  bill = (minutes > 500) ? 350 + (minutes - 500) * 2 : 350;
  printf("%d", bill);

  return 0;
}
