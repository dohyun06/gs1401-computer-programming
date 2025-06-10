#include <stdio.h>

int gcd_r(int a,int b) {
  return b ? gcd_r(b, a % b) : a;
}

int main(void) {
  int a, b;

  printf("Enter two positive integers: ");
  scanf("%d %d", &a, &b);
  printf ("gcd = %d", gcd_r(a, b));

  return 0;
}