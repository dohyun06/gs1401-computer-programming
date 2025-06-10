#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int row, column, sum = 0;

  printf("Enter number of rows: ");
  scanf("%d", &row);
  printf("Enter number of columns: ");
  scanf("%d", &column);
  int **arr = (int**)malloc(row * sizeof(int*));
  for (int i = 0; i < row; i++) {
    arr[i] = (int*)malloc(column * sizeof(int));
  }
  printf("Enter %d integers:\n", row * column);
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      scanf("%d", &arr[i][j]);
      sum += arr[i][j];
    }
  }

  printf("Total sum: %d\n", sum);
  printf("Average: %.2f\n", (double)sum / row / column);
}