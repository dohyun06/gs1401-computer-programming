#include <stdio.h>

int factorial(int n, int sum) {
  if (n == 0) {
    return sum;
  }
  sum = sum * n;
  return factorial(n - 1, sum); 
}

int main(void) {
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);
  
  printf("%d", factorial(n, 1));

  return 0;
}