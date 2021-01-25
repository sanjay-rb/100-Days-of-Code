#include <stdio.h>
#include <string.h>

int isVowel(char letter){
  if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    return 1;
  return 0;
}

int main(void) {
  char string[50];
  printf("Enter the string\n");
  scanf("%[^\n]s", string);

  for(int i=0; i<strlen(string); i++){
    int j = i+1;
    
    while(isVowel(string[i]) && isVowel(string[j])){
      // swap chars....
      char temp;
      temp = string[i];
      string[i] = string[j];
      string[j] = temp;
      
      // remove the consecutive vowels....
      for(int st = i; st<strlen(string); st++){
        string[st] = string[st+1];
      }
    }
  }
  
  printf("%s\n", string);
  return 0;
}
