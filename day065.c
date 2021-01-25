#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void) {
  char *in_string;
  int char_occurance_count = 1, i;
  char number_string[6][6] = {
    "zero", "one", "two", "three", "four", "five"
  };
  printf("Enter the input string\n");
  scanf("%s", in_string);
  
  printf("RLE result is ");
  
  for(int i=0; i<strlen(in_string); i++){
    int j =i+1;
    if(j < strlen(in_string)){
      if(*(in_string+i) == *(in_string+j)){
        char_occurance_count++;
      }else{
        if(isdigit(*(in_string+i)))
          printf("%s%c", number_string[char_occurance_count], *(in_string+i));
        else
          printf("%d%c", char_occurance_count, *(in_string+i));
        char_occurance_count = 1;
      }
    }
  }
  
  if(isdigit(*(in_string+(strlen(in_string)-1))))
    printf("%s%c", number_string[char_occurance_count], *(in_string+(strlen(in_string)-1)));
  else
    printf("%d%c", char_occurance_count, *(in_string+(strlen(in_string)-1)));
  return 0;
}
