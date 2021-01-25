#include <stdio.h>
#include <string.h>

int main(void) {
  char string[50];
  int i, j, first, last, count = 0, flag = 0;
  printf("Enter the string\n");
  scanf("%s", string);
  
  for(i=0; i<strlen(string); i++){
    for(j=i+1; j<strlen(string); j++){
      if(string[i] == string[j]){
        if(string[i+1] == string[j+1]){
          flag = 1;
          goto checkAll;
        }
      }
    }
  }
  
  
  checkAll:
    first = i;
    while(string[i] == string[j]){
      i++;
      j++;
    }
    
    // all letter are same....
    if(j == strlen(string)){
      last = strlen(string)/2;
    }else{
      last = i;
    }
    
    
    for(i=first; i<last; i++){
      printf("%c", string[i]);
    }
  return 0;
}
