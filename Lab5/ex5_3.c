#include <stdio.h> 

int main(void) {
  int start, end;

  printf("Enter start number: ");
  scanf("%d", &start);
  printf("Enter end number: ");
  scanf("%d", &end);

  for (int i = start; i <= end; i++)
    if (i % 3)
      printf("%d\n", i);

  return 0;
}