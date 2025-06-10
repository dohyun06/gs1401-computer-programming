#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand((unsigned int)time(NULL));
  int num, sum = 0;

  for (int i = 0; i < 10; i++) {
    num = rand() % 100 + 1;
    sum += num;

    printf("Random number %d: %d\n", i + 1, num);
  }

  printf("\n");
  printf("Sum of random numbers: %d\n", sum);
  printf("Average of random numbers: %.1f", (float)sum / 10);

  return 0;
}