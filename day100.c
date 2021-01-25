#include <stdio.h>
#include <string.h>

int main(void) {
  char string[50];
  int flag = 1;
  printf("Enter the string\n");
  scanf("%s", string);
  
  for(int i=0; i<strlen(string); i++){
    for(int j=i+1; j<strlen(string); j++){
      if(string[i] == string[j]){
        flag = 0;
        break;
      }
    }
  }
  
  flag? printf("%s is an isogram", string) : printf("%s is not an isogram", string);
  return 0;
}
