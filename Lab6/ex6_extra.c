#include <stdio.h>
#include <math.h>

int main(void) {
  int a, b, c, d;

  printf("Enter a: ");
  scanf("%d", &a);
  printf("Enter b: ");
  scanf("%d", &b);
  printf("Enter c: ");
  scanf("%d", &c);
  
  d = b * b - 4 * a * c;

  if (d > 0) {
    printf("Root 1: %.2f\n", (float)((-b) + sqrt(d)) / 2 / a);
    printf("Root 2: %.2f", (float)((-b) - sqrt(d)) / 2 / a);
  }
  else if (d < 0) {
    printf("No real roots exist.");
  }
  else {
    printf("Double root: %.2f", (float)(-b) / 2 / a);
  }

  return 0;
}