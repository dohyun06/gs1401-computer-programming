#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int iter, el;

  printf("Separate odd and even integers in separate arrays:\n");
  printf("------------------------------------------------------\n");
  printf("Input the number of elements to be stored in the array :");
  scanf ("%d", &iter);
  int *even = (int*)calloc(iter, sizeof(int));
  int *odd = (int*)calloc(iter, sizeof(int));
  for (int i = 0; i < iter; i++) {
    printf("element - %d : ", i);
    scanf("%d", &el);
    if (el % 2) odd[i] = el;
    else even[i] = el;
  }
  printf("\nThe Even elements are : \n");
  for (int i = 0; i < iter; i++) {
    if (even[i]) printf("%d ", even[i]);
  }
  printf("\nThe Odd elements are : \n");
  for (int i = 0; i < iter; i++) {
    if (odd[i]) printf("%d ", odd[i]);
  }
  free(even);
  free(odd);

  return 0;
}