#include <stdio.h>

float inn_prod(float *a, float *b, int len) {
  float sum = 0;
  for (int i = 0; i < len; i++) {
    sum += a[i] * b[i];
  }
  return sum;
}

int main(void) {
  float a[5], b[5];
  printf("Enter a vector a: ");
  for (int i = 0; i < 5; i++) {
    scanf("%f", &a[i]);
  }
  printf("Enter a vector b: ");
  for (int i = 0; i < 5; i++) {
    scanf("%f", &b[i]);
  }
  printf("\nThe inner product is %.3f", inn_prod(a, b, 5));

  return 0;
}