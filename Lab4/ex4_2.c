#include <stdio.h>

int main(void) {
  char ch;
  int vowel[5] = { 0, 0, 0, 0, 0 };

  printf("Enter a sentence: ");

  while((ch = getchar()) != '\n') {
    if (ch == 'a' || ch == 'A') vowel[0]++;
    if (ch == 'e' || ch == 'E') vowel[1]++;
    if (ch == 'i' || ch == 'I') vowel[2]++;
    if (ch == 'o' || ch == 'O') vowel[3]++;
    if (ch == 'u' || ch == 'U') vowel[4]++;
  }
  printf("The number of 'a' or 'A' is %d,\n", vowel[0]);
  printf("The number of 'e' or 'E' is %d,\n", vowel[1]);
  printf("The number of 'i' or 'I' is %d,\n", vowel[2]);
  printf("The number of 'o' or 'O' is %d,\n", vowel[3]);
  printf("The number of 'u' or 'U' is %d", vowel[4]);

  return 0;
}