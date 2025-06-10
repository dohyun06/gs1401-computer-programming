#include <stdio.h>

int euclid_gcd(int a,int b) {
  while (b) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int main(void) {
  int M, N;

  printf("Enter two integers: ");
  scanf("%d %d", &M, &N);

  printf ("Greatest common divisor: %d", euclid_gcd(M, N));

  return 0;
}