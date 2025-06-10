#include <stdio.h>

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(void) {
  int a, b;
  printf("Enter two integers:\n");
  scanf("%d %d", &a, &b);
  printf("Before: a = %d, b = %d\n", a, b);
  swap(&a, &b);
  printf("After: a = %d, b = %d\n", a, b);

  return 0;
}