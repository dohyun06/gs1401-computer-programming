#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand((unsigned int)time(0));

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 10; j++) {
      printf("%3d ", rand() % 100);
    }
    printf("\n");
  }

  return 0;
}