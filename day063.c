#include <stdio.h>
#include <string.h>


int main(void) {
  char *in_string;
  int char_occurance_count = 1, i;
  printf("Enter the input string\n");
  scanf("%s", in_string);
  
  printf("RLE result is ");
  
  for(int i=0; i<strlen(in_string); i++){
    int j =i+1;
    if(j < strlen(in_string)){
      if(*(in_string+i) == *(in_string+j)){
        char_occurance_count++;
      }else{
        printf("%d%c", char_occurance_count, *(in_string+i));
        char_occurance_count = 1;
      }
    }
  }
  printf("%d%c", char_occurance_count, *(in_string+(strlen(in_string)-1)));
  return 0;
}
