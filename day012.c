#include <stdio.h>

int main(void) {
  char in_char;
  printf("Enter a character\n");
  scanf("%c", &in_char);
  printf("ASCII value of %c is %d", in_char, in_char);
  return 0;
}
