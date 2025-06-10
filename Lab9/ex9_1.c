#include <stdio.h>

int main(void) {
  int input[10], start, end;

  printf("Please enter 10 numbers : ");
  for (int i = 0; i < 10; i++) scanf("%d", &input[i]);
  printf("Enter the starting and ending position ( 1 - 10 ) to copy : ");
  scanf("%d %d", &start, &end);
  for (int i = 0; i < 10; i++) printf("%d ", start + i <= end ? input[start + i - 1] : 0);

  return 0;
}