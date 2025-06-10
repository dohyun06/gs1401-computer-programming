#include <stdio.h> 

int main(void) {
  int year;

  printf("Enter a year: ");
  scanf("%d", &year);
  if (!(year % 400)) printf("%d is a leap year.", year); 
  else if (!(year % 100)) printf ("%d is a common year.", year);
  else if (!(year % 4)) printf("%d is a leap year.", year);
  else printf("%d is a common year.", year);

  return 0;
}