#include <stdio.h>

int main(void) {
  int arr[3][4], sum = 0;

  printf("Enter a 3x4 array of integers:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("Element [%d][%d]: ", i, j);
      scanf("%d", &arr[i][j]);
      sum += arr[i][j];
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      sum += arr[i][j];
    }
  }

  printf("You entered:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%4d", arr[i][j]);
    }
    printf("\n");
  }
  printf("Total sum: %d\n", sum);
  printf("Average: %.2f\n", sum / 12.0);
}