#include <stdio.h>

int main(void) {
  int num, sum = 1;

  printf("Enter a number: ");
  scanf("%d", &num);

  if (num < 0) printf("Factorial is not defined for negative numbers.");
  else {
    printf("%d! = ", num);
    while(num) {
      sum *= num;
      num--;
    }
    printf("%d", sum);
  }

  return 0;
}