#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, result = 1;

  printf("Enter the value of n: ");
  scanf ("%d", &n);
  int *arr = (int*)malloc(n);
  printf("Enter %d integers: ", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    if (i > (n - 1) / 2 && arr[i] != arr[n - i - 1]) result = 0;
  }
  if (result) printf("It is a palindrome");
  else printf("It is not a palindrome");

  free(arr);

  return 0;
}