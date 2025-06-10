#include <stdio.h>

int main(void) {
  int arr[10], min = 0, max = 0;

  scanf("%d", &arr[0]);
  min = arr[0];
  max = arr[0];

  for (int i = 1; i < 10; i++) {
    scanf("%d", &arr[i]);
    min = min < arr[i] ? min : arr[i];
    max = max > arr[i] ? max : arr[i];
  }

    printf("%d %d", max, min);
}