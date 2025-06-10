#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int cap = 1;
  int ch;
  char *buffer = (char*)malloc(cap);

  printf("Enter an English sentence without spaces: ");
  while ((ch = getchar()) != EOF && ch != '\n') {
    buffer[cap - 1] = ch < 'a' ? ch - 'A' + 'a' : ch - 'a' + 'A';
    cap++;
    char *tmp = (char*)realloc(buffer, cap);
    buffer = tmp;
  }
  buffer[cap - 1] = '\0';
  printf("Converted sentence: %s", buffer);
  free(buffer);

  return 0;
}