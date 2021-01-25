#include <stdio.h>

int main(void) {
  int in_number, sum_of_divisor = 0;
  printf("Enter the number\n");
  scanf("%d", &in_number);
  
  for(int i=1; i<=(in_number/2); i++){
    if(in_number%i == 0){
      sum_of_divisor += i;
    }
  }
  
  if(in_number == sum_of_divisor){
    printf("%d is a perfect number\n", in_number);
  }else{
    printf("%d is not a perfect number\n", in_number);
  }
  return 0;
}

