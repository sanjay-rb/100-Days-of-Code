#include <stdio.h>

int main(void) {
  int in_number, trailing_zero_count = 0;
  
  // get the input number....
  printf("Enter the integer\n");
  scanf("%d", &in_number);
  
  // convertion to binary....
  printf("Binary equivalent of %d is ", in_number);
  for(int i=(8-1); i>=0; i--){
    
    // move bits from 8 to 1....
    // 8 denote number of bit....
    int k = in_number >> i;
    if(k & 1){ // first bit is 1 then print 1 & restart the count of trailing zeros....
      printf("1"); 
      trailing_zero_count = 0;
    }
    else{ // first bit is 0 then print 0 & start the count of trailing zeros....
      printf("0");
      trailing_zero_count++;
    }
  }
  
  printf("\nNumber of trailing zeros in its binary representation is %d", trailing_zero_count);
  
  return 0;
}
