#include <stdio.h>

int main(void) {
  int largeInt, number_of_digit=0;
  
  printf("Enter a number\n");
  scanf("%d", &largeInt);
  int temp = largeInt;
  
  
  //get number_of_digit....
  while(temp != 0 ){
    temp /= 10;
    number_of_digit++;
  }
  
  printf("Possible cyclic permutations are\n");
  for(int i=0; i<number_of_digit; i++){
    printf("%d\n", largeInt);
    int digit = largeInt % 10;
    for(int i=0; i<number_of_digit-1; i++){
      digit *= 10;
    }
    largeInt = digit + (largeInt / 10);
  }
  
  return 0;
}
