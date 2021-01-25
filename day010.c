#include <stdio.h>

int properDivisorSum(int in_number){
  int i, sum_number =1;
  for(i = 2; i <= in_number/2; i++){
    if(in_number%i == 0){
      sum_number = sum_number + i;
    }
  }
  return sum_number;
}

int main(void) {
  int number1, number2, i;
  printf("Enter two numbers to check if Amicable or not\n");
  scanf("%d%d", &number1, &number2);
  if(properDivisorSum(number1) == number2 && properDivisorSum(number2) == number1){
    printf("%d and %d are Amicable numbers", number1, number2);
  }else{
    printf("%d and %d are not Amicable numbers", number1, number2);
  }
  return 0;
}
