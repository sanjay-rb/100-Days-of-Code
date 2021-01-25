#include <stdio.h>
int main(void)
{
  char in_letter;
  printf("Enter any character :\n");
  scanf("%c", &in_letter);
  if(in_letter == 'a' || in_letter == 'e' || in_letter == 'i' || in_letter == 'o' || in_letter == 'u' ||
     in_letter == 'A' || in_letter == 'E' || in_letter == 'I' || in_letter == 'O' || in_letter == 'U')
    printf("%c is a VOWEL", in_letter);
  else
    printf("%c is a CONSONANT", in_letter);

return 0;
}
