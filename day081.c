#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void) {
  char in_string[50], special_char[50], non_spl_char[50];
  
  printf("Enter the input string\n");
  scanf("%[^\n]s", in_string);
  int k=0;
  
  for(int i=0; i<strlen(in_string); i++){
    if(isalnum(in_string[i]) || isspace(in_string[i])){
      special_char[k] = in_string[i];
      k++;
    }
  }
  
  for(int i=0; i<strlen(in_string); i++){
    if(!isalnum(in_string[i]) && !isspace(in_string[i])){
      special_char[k] = in_string[i];
      k++;
    }
  }
  
  printf("The final output is \n%s", special_char);
  
  return 0;
}
