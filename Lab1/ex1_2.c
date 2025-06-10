#include <stdio.h>

int main(void) {
  int num, digit[3];

  printf("Enter a three-digit number: ");
  scanf("%d", &num);
  for (int i = 0; i < 3; i++){
    digit[i] = num % 10;
    num /= 10;
  }
  printf("Sum of digits: %d\n", digit[0] + digit[1] + digit[2]);
  printf("Products of digits: %d\n", digit[0] * digit[1] * digit[2]);
  
  return 0;
}