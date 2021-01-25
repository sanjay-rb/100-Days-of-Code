#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char in_string[50];
  printf("Enter the string\n");
  scanf("%[^\n]s", in_string);
  
  for(int i=0; i<strlen(in_string); i++){
    if(i == 0 || i == strlen(in_string) - 1){
      in_string[i] = toupper(in_string[i]);
    }else if(isspace(in_string[i]) || ispunct(in_string[i])){
      in_string[i-1] = toupper(in_string[i-1]);
      in_string[i+1] = toupper(in_string[i+1]);
    }
  }
  
  printf("%s", in_string);
  return 0;
}
