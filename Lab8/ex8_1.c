#include <stdio.h>

int factorial(int n, int sum) {
  if (!n) return sum;
  return factorial(n - 1, sum * n);
}

int main(void) {
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);
  printf("%d", factorial(n, 1));

  return 0;
}