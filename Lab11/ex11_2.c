#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num, sum = 0;
  printf("Enter number of elements: ");
  scanf("%d", &num);
  int *arr = (int*)malloc(num);
  printf("Enter %d integers: ", num);
  for (int i = 0; i < num; i++) {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }
  printf("Sum: %d", sum);
  free(arr);

  return 0;
}