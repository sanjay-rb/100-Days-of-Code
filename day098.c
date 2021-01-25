#include <stdio.h>
#include <string.h>

void swap(int first, int sec, char string[]){
  char temp = string[first];
  string[first] = string[sec];
  string[sec] = temp;
}

int main(void) {
  
  char string[50], temp[50];
  printf("Enter the string\n");
  scanf("%s", string);
  strcpy(temp, string);
  
  for(int i=0; i<strlen(string); i++){
    int j = i+1;
    if(string[i] == string[j]){
      int k = j;
      while(string[j] == string[k]){
        k++;
      }
      swap(j, k, string);
    }
  }
  
  strlen(temp) == strlen(string)? printf("%s", string) : printf("Not possible to rearrange");
  
  return 0;
}
