#include <stdio.h>

int main(void) {
  int a, sum = 0;

  printf("Enter a number: ");
  scanf("%d", &a);

  while (a) {
    a /= 10;
    sum++;
  }

  printf("The number has %d digits.", sum ? sum : 1);

  return 0;
}