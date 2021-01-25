#include <stdio.h>
#include <string.h>

int main(void) {
  char in_string[50], in_char, count_char = 0;
  int  found_index[50], i, j =0, target_index;
  printf("Enter the String\n");
  //gets(in_string);
  scanf("%[^\n]s", in_string);
  printf("Enter the character you want to search\n");
  scanf(" %c", &in_char);
  for(i=0; i<strlen(in_string); i++){
    if(in_string[i] == in_char){
      count_char++;
      found_index[j] = i;
      j++;
    }
  }
  
  printf("The character '%c' found in %d index/indices ", in_char, count_char);
  for(i=0; i<j; i++){
    if(i != j-1)
      printf("%d,", found_index[i]);
    else
      printf("%d\n", found_index[i]);
  }
  if(j == 1){
    printf("%d", found_index[0]);
  }else{
    printf("Which index you're targeting?\n");
    scanf("%d", &target_index);
    printf("%d", target_index);
  }
  return 0;
}
