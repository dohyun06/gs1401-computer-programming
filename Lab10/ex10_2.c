#include <stdio.h>

int main(void) {
  int arr[2][3], input = 0;

  printf("Enter elements of matrix A (2x3):\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("A[%d][%d]: ", i, j);
      scanf("%d", &arr[i][j]);
    }
  }
  printf("Enter elements of matrix B (2x3):\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("B[%d][%d]: ", i, j);
      scanf("%d", &input);
      arr[i][j] += input; 
    }
  }
  printf("\nSum of matrices A and B:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%4d", arr[i][j]);
    }
    printf("\n");
  }
}