#include <stdio.h>

int gcd_r(int M, int N) {
  int sum = N ? gcd_r(N, M % N) : M;
  return sum;
}

int main(void) {
  int a, b;

  printf("Enter two positive integers: ");
  scanf("%d %d", &a, &b);

  printf ("gcd = %d", gcd_r(a, b));

  return 0;
}