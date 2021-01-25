#include <stdio.h>
#include <string.h>

int main(void) {
  char in_string[50];
  int larger_count = 0;
  printf("Enter the String\n");
  scanf("%s", in_string);
  
  for(int i=0; i<strlen(in_string); i++){
    for(int j=i+1; j<strlen(in_string); j++){
      if(in_string[i] < in_string[j]){
        larger_count++;
      }
    }
    printf("%d ", larger_count);
    larger_count = 0;
  }
  return 0;
}
