#include <stdio.h>

int main(void) {
  int input, sum = 0;

  printf("Enter positive integers (enter 0 to stop): ");

  while(1) {
    scanf("%d", &input);
    if (!input) break;
    sum += input;
  }

  printf("Sum of entered numbers: %d", sum);

  return 0;
}