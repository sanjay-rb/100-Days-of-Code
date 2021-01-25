#include <stdio.h>
#include <string.h>

int findString(char sentence[],char find[]){
  int i,word_len,word_count, found_flag;
  char words_in_string[10][10]; 
  word_count =0;
  word_len = 0;
  found_flag = 0;
  // seperate the words into another string array
  for(i=0;i<=(strlen(sentence));i++){
      if(sentence[i]==' '||sentence[i]=='\0'){
          words_in_string[word_count][word_len]='\0';
          word_count++;
          word_len=0;
      }
      else{
          words_in_string[word_count][word_len]=sentence[i];
          word_len++;
      }
  }
  
  // compare the word array with the search word
  for(i=0;i < word_count;i++){
    if(!strcmp(find, words_in_string[i])){
      found_flag = 1;
    }
  }
  return found_flag;
}

int main(void) {
  char in_string[100], search_word[50];
  printf("Enter the String\n");
  scanf("%[^\n]s", in_string);
  scanf("%s", search_word);
  
  // My Function for findString
  if(findString(in_string, search_word)){
    printf("the search word is found\n");
  }else{
    printf("the search word is not found\n");
  }
  
  // In Build Funtion for findString
  /*
  if(strstr(in_string, search_word)){
    printf("the search word is found\n");
  }else{
    printf("the search word is not found\n");
  }
  */
  return 0;
}
