#include <stdio.h>

int main(void) {
  int a, b, c, d, e;

  printf("Please enter your identification number: ");
  scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
  printf("The identification number with digit : %d%d%d%d%d%d", a, b, c, d, e, (a + b + c + d + e) % 10);

  return 0;
}