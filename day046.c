#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char s[50], t[50];
  int i, j=0; 
  printf("Enter the String\n");
  scanf("%[^\n]s", s);
  for(int i=0; i<strlen(s); i++){
    if(isalnum(s[i]) || isspace(s[i])){
      t[j] = s[i];
      j++;
    }else if(ispunct(s[i])){
      if(s[i] == ','){
        t[j] = ' ';
        j++;
      }
    }
  }
  printf("%s", t);
  return 0;
}
