#include <stdio.h>

int main(void) {
  int menu, q, sum = 0, price[3]={ 3000, 3500, 4000 };

  while (1) {
    printf("=== Cafe Menu ===\n");
    printf("1. Americano (3000 won)\n");
    printf("2. Latte     (3500 won)\n");
    printf("3. Cappuccino(4000 won)\n");
    printf("4. Finish Order and Pay\n");
    printf("Enter menu number: ");
    scanf("%d", &menu);
    if (menu == 4) break;
    printf("Enter quantity: ");
    scanf("%d", &q);
    sum += price[menu - 1] * q;
    printf("Current total: %d won\n\n", sum);
  }
  printf("\nFinal total: %d won. Thank you!", sum);

  return 0;
}