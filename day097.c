#include <stdio.h>
#include <string.h>
#include <ctype.h>

void deleteChar(int index, char string[]){
  for(int k=index; k<strlen(string); k++) string[k] = string[k+1];
}

int main(void) {
  char string[50], alpha[27] = "abcdefghijklmnopqrstuvwxyz";
  printf("Enter the string\n");
  scanf("%[^\n]s", string);
  
  for(int i=0; i<strlen(string); i++)
    for(int j=0; j<strlen(alpha); j++)
      if(tolower(string[i]) == alpha[j]) deleteChar(j, alpha);
  
  strlen(alpha)? printf("The pangram result is\n%s", alpha) : printf("The entered string is perfect pangram.\n");
  
  return 0;
}
