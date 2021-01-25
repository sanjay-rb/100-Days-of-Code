#include <stdio.h>
#include <string.h>

int main(void) {
  char current_string[50], in_string[50];
  char temp, continue_char;
  int consecutive_flag = 1, char_count = 1, continue_flag = 1;
  printf("Input the string\n");
  scanf("%s", in_string);
  
  // copy on current_string
  for(int i=0; i<strlen(in_string); i++)
    current_string[i] = in_string[i];
  
  
  // sort current_string
  for(int i=0; i<strlen(current_string); i++){
    for(int j=i+1; j<strlen(current_string); j++){
      if(current_string[i] > current_string[j]){
        temp = current_string[i];
        current_string[i] = current_string[j];
        current_string[j] = temp;
      }
    }
  }
  
  
  // check consecutive
  for(int i=0; i<strlen(current_string); i++){
    for(int j=i+1; j<strlen(current_string); j++){
      if(current_string[i] - current_string[j] == -1){
        i++;
      }else{
        consecutive_flag = 0;
      }
    }
  }
  
  // print consecutive
  if(consecutive_flag == 1){
    printf("The string ");
    for(int i=0; i<strlen(current_string); i++){
      if(i == strlen(current_string)-1)
        printf("'%c'", current_string[i]);
      else
        printf("'%c',", current_string[i]);
    }
    printf(" which are consecutive letters\n");
    
    printf("All the letters occurs exactly once\n");
  }else{
    printf("The string ");
    for(int i=0; i<strlen(in_string); i++){
      if(i == strlen(in_string)-1)
        printf("'%c'", in_string[i]);
      else
        printf("'%c',", in_string[i]);
    }
    printf(" which are not consecutive letters\n");
    
    // charater count in char_count
    for(int i=0; i<strlen(current_string); i++){
      for(int j =i+1; j<strlen(current_string); j++){
        if(current_string[i] == current_string[j]){
          continue_char = current_string[i];
          char_count++;
          continue_flag = 0;
        }
      }
      if(continue_flag == 0)
        break;
    }
    
    // print char_count
    if(char_count != 1)
      printf("letter %c occurs %d time(s)\n", continue_char, char_count);
    else
      printf("All the letters occurs exactly once\n");
  }
  return 0;
}
