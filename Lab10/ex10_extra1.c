#include <stdio.h>

int max (int arr[], int size) {
  int max = -100;
  for (int i = 0; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  return max;
}

double avg(int arr[], int size) {
  double sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }

  return sum / size;
}

int main(void) {
  int arr[10];

  printf("Enter 10 integers:\n");
  for (int i = 0; i < 10; i++) {
    printf("Number %d: ", i + 1);
    scanf("%d", &arr[i]);
  }
  printf("Maximum value in array: %d\n", max(arr, 10));
  printf("Average value in array: %.2f\n", avg(arr, 10));

  return 0;
}
