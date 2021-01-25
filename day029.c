#include <stdio.h>

void isPalindrome(char arg_string[]){
  char *c_pointer, result_array[50];
  int len=0, palindrom_flag = 0;
  
  for(c_pointer=arg_string; *c_pointer; c_pointer++){
    len++;
  }
  
  printf("Entered string is \n%s", arg_string);
  for(int i=0; i<len; i++){
    result_array[i] = arg_string[len-(i+1)];
  }
  printf("Reversed string is\n%s\n", result_array);
  for(int i=0; i<len; i++){
    if(result_array[i] != arg_string[i]){
      palindrom_flag = 1;
    }
  }
  if(palindrom_flag == 0){
    printf("Palindrome string- Yes");
  }else{
    printf("Palindrome string- No");
  }
}

int main(void) {
  char in_string[50];
  printf("Enter your string\n");
  scanf("%s", in_string);
  isPalindrome(in_string);
  return 0;
}
