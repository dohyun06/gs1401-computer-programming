#include <stdio.h>

int main(void) {
  int num;

  printf("Enter the student's score (0-100): ");
  scanf("%d", &num);
  if (num <= 100 && num >= 90) printf("Grade: A");
  else if (num < 90 && num >= 80) printf("Grade: B");
  else if (num < 80 && num >= 70) printf("Grade: C");
  else if (num < 70 && num >= 60) printf("Grade: D");
  else if (num < 60 && num >= 0) printf("Grade: F");
  else printf("Invalid score. Please enter a score between 0 and 100.");

  return 0;
}