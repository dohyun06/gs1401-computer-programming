#include <stdio.h>

int main(void) {
  int i = 1, num;

  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Divisors of %d: ", num);
  
  while (i <= num) {
    if (!(num % i)) printf("%d ", i);
    i++;
  }

  return 0;
}