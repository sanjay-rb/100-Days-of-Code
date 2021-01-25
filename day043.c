#include <stdio.h>
#include <string.h>

int main(void) {
  
  char in_string[50], vowel_array[50];
  int ascii_sum = 0;
  printf("Input the String\n");
  scanf("%s", in_string);
  printf("The vowel(s) is(are)");
  int j=0;
  for(int i=0; i<strlen(in_string); i++){
    if(in_string[i] == 'a' || in_string[i] == 'A' || in_string[i] == 'e' || in_string[i] == 'E' || in_string[i] == 'i' || in_string[i] == 'I' || in_string[i] == 'o' || in_string[i] == 'O' || in_string[i] == 'u' || in_string[i] == 'U'){
      vowel_array[j] = in_string[i];
      ascii_sum += in_string[i];
      j++;
    }
  }
  
  for(int i=0; i<strlen(vowel_array); i++){
    if(i == strlen(vowel_array)-1)
      printf(" %c", vowel_array[i]);
    else
      printf(" %c,", vowel_array[i]);
  }
  
  printf("\nASCII summation is %d", ascii_sum);
 
  return 0;
}
