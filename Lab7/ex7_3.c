#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int num, sum = 0;

  srand((unsigned int)time(0));

  for (int i = 0; i < 10; i++) {
    num = rand() % 100 + 1;
    printf("Random number %d: %d\n", i + 1, num);
    sum += num;
  }
  printf("\nSum of random numbers: %d\n", sum);
  printf("Average of random numbers: %.1f", (double)sum / 10);

  return 0;
}