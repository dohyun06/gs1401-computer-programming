#include <stdio.h>

int main(void) {
  int num = 0;

  printf("Enter the number of rows (n): ");
  scanf("%d", &num);

  for (int i = 0; i < num; i++) { 
    for (int j = 0; j <= i; j++) {
      printf ("*");
    }
    printf("\n");
  }
  printf("\n");
  
  for (int i = num; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      printf("*");
    }
    printf("\n");
  }
  printf("\n");

  for (int i = 0; i < num; i++) {
    for (int j = 0; j < num; j++){
      if (i <= j) printf("*");
      else printf(" ");
    }
    printf("\n");
  }
  printf("\n");

  for (int i = num; i > 0; i--) {
    for (int j = 1; j <= num; j++){
      if (i <= j) printf("*");
      else printf(" ");
    }
    printf("\n");
  }

  return 0;
}