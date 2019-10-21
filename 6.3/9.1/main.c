#include <stdio.h>
int main() {
 int a, b;
scanf("%d %d", &a, &b);
printf("%s", (a - b%7%2 + (b==2) - (b==7) <= 30) &&b<13 ? "correct" : "error");
}
