#include <stdio.h>

int main(void) {
  int a, b, c;

  printf("Enter three integers A, B, anc C: ");
  scanf("%d%d%d", &a, &b, &c);

  if (a == b && b == c) printf("Equilateral Triangle");
  else if (a == b || b == c || c == a) printf("Isosceles Triangle");
  else if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b) printf("Right Triangle");
  else if (a + b > c && b + c > a && c + a > b) printf("General triangle");
  else printf("This is not a valid triangle.");

  return 0;
}