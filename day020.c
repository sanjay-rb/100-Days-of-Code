#include <stdio.h>

void checkMePrime(int in_num){
  int i, prime_flag = 0;
  
  for(i=2; i<= in_num/2; i++){
    if(in_num%i == 0){
      prime_flag = 1;
    }
  }
  
  if(in_num != 1){
    if(prime_flag == 0){
      printf("%d\n", in_num);
    }
  }
}

int main(void){
  //have your prime fiboacci logic here, All the very best from your teacher

  int in_range_of_fib, num_one = 0, num_two = 1, num_next = 0, i;
  printf("Enter the range of fibonacci numbers(please skip first two fibonacci numbers i.e 0 & 1)\n");
  scanf("%d", &in_range_of_fib);
  printf("the prime fibonacci numbers are\n");
  for(i = 1; i<=in_range_of_fib; i++){
    num_next = num_one + num_two;
    num_one = num_two;
    num_two = num_next;
    checkMePrime(num_next);
    
  }
    return 0;
}
