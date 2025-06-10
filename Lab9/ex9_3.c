#include <stdio.h>

int main(void) {
  int prices[5], discount;

  printf("Enter 5 commodity prices:\n");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &prices[i]);
  }
  printf("\nDiscount rate(%)? ");
  scanf("%d", &discount);
  for (int i = 0; i < 5; i++) {
    printf("price: %6d --> discounted price: %6d\n", prices[i], prices[i] * (100 - discount) / 100);
  }

  return 0;
}