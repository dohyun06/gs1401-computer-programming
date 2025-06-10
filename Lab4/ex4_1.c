#include <stdio.h>

int main(void) {
  int num;

  printf("Enter an integer: ");
  scanf("%d", &num);
  printf("The prime factors of %d are ", num);

  for (int i = 2; i <= num; i++) {
    while (!(num % i)) {
      printf("%d ", i);
      num /= i;
    }
  }

  return 0;
}