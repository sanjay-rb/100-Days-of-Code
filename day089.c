#include <stdio.h>

int isDigitPrime(int number){
  while(number != 0){
    int digit = number % 10;
    if(digit != 2 && digit !=  3 && digit !=  5 && digit != 7)
      return 1;
    number = number / 10;
  }
  return 0;
}

int main(void) {
  int number;
  printf("Enter a number \n");
  scanf("%d", &number);
  while(isDigitPrime(number)){
    number--;
  }
  
  printf("Result is %d", number);
  return 0;
}
