#include <stdio.h>

int main(void) {
  int N, M, max = 0;
  printf("Enter dimensions (N M): ");
  scanf("%d %d", &N, &M);
  int arr[N][M];
  printf("Enter values:\n");
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      scanf("%d", &arr[i][j]);
      if (arr[i][j] > max) max = arr[i][j];
    }
  }
  printf("Max value: %d", max);
  printf("Positions: ");
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      if (arr[i][j] == max) {
        printf("(%d, %d) ", i, j);
      }
    }
  }
}