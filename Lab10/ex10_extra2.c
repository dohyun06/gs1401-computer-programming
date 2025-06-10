#include <stdio.h>

int main(void) {
  int arr[3][3], sum, tSum = 0;

  printf("Enter 9 values for 3x3 matrix:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  sum = arr[0][0] + arr[1][1] + arr[2][2];
  tSum = arr[0][2] + arr[1][1] + arr[2][0];
  if (tSum != sum) {
      printf("Not a Magic Square\n");
      return 0;
  }
  tSum = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      tSum += arr[i][j];
    }
    if (tSum != sum) {
      printf("Not a Magic Square\n");
      return 0;
    }
    tSum = 0;
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      tSum += arr[j][i];
    }
    if (tSum != sum) {
      printf("Not a Magic Square\n");
      return 0;
    }
    tSum = 0;
  }
  printf("Magic Square\n");

  return 0;
}
