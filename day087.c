#include <stdio.h>
#include <string.h>

int isPalindrome(char arg_string[], int str, int len){
  while(str < len){
    if(arg_string[str] != arg_string[len-1])
      return 0;
    str++;
    len--;
  }
  return 1;
}

void printString(char arg_string[], int str, int len){
  for(int i=str; i<len; i++)
    printf("%c", arg_string[i]);
}

int main(void) {
  char string[50];
  printf("Enter the string\n");
  scanf("%s", string);
  
  printf("Palindromic partitions are\n");
  for(int dis = 0; dis<strlen(string); dis++){
    for(int str = 0; str<strlen(string); str++){
      int end = str + dis + 1;
      
      if(isPalindrome(string, str, end)){
        printString(string, str, end);
        printf(" ");
      }
    }
    printf("\n");
  }
  
  return 0;
}
