#include <stdio.h>

int main(void) {
  int H, W, N;

  printf("Enter H, W and N : ");
  scanf("%d%d%d", &H, &W, &N);
  printf("N : %d ---------> Student's room number : %d", N, (N % H) * 100 + N / H + 1);

  return 0;
}