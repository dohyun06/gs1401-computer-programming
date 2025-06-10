#include <stdio.h>

int main(void) {
  int a, sum = 0;

  printf("Enter a number: ");
  scanf("%d", &a);

  while (a) {
    sum *= 10;
    sum += a % 10;
    a /= 10;
  }

  printf("Reversed number: %d", sum);

  return 0;
}