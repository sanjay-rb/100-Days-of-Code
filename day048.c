#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char in_string[50], string_wospace[50];
  printf("Enter the String\n");
  scanf("%[^\n]s", in_string);
  
  // convert into without space string....
  int j=0;
  for(int i=0; i<strlen(in_string); i++){
    if(in_string[i] != ' '){
      string_wospace[j] = in_string[i];
      j++;
    }
  }
  
  // reverse the new without space string....
  char *rev_string = calloc(strlen(string_wospace), sizeof(char));
  for(int i=0; i<strlen(string_wospace); i++){
    *(rev_string+i) = string_wospace[strlen(string_wospace) - (i+1)];
  }
  
  // compare the given without space string with reverse string....
  if(strcmp(rev_string, string_wospace))
    printf("The entered string is not a palindrome string\n");
  else
    printf("The entered string is a palindrome string\n");
  return 0;
}
