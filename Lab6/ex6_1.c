#include <stdio.h>

int euclid_gcd(int a,int b) {
  return b ? euclid_gcd(b, a % b) : a;
}

int main(void) {
  int M, N;

  printf("Enter two integers: ");
  scanf("%d %d", &M, &N);
  printf ("Greatest common divisor: %d", euclid_gcd(M, N));

  return 0;
}