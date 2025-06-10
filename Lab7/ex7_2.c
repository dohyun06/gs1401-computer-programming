#include <stdio.h>
#include <math.h>

double power(double x, double y) {
  return pow(x, y);
}

double factorial(double n) {
  double fac = 1;

  for (int i = 1; i <= n; i++) fac *= i;

  return fac;
}

int main(void) {
  double x, n, e = 0;

  printf("Enter the value of x: ");
  scanf("%lf", &x);
  printf("Enter the number of terms n: ");
  scanf("%lf", &n);
  for (int i = 0; i < n; i++) {
    e += power(x, i) / factorial(i);
  }
  printf("\nApproximated value of e^%.2lf => %.10lf\n", x, e);
  printf("Actual value of e^%.2lf = %.10lf\n", x, exp(x));
  printf("Absolute error: %.10lf", abs(exp(x) - e));

  return 0;
}