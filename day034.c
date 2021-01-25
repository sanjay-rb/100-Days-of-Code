#include <stdio.h>

int isPrime(int in_num){
  int i, prime_flag = 0;
  for(i=2; i<= in_num/2; i++){
    if(in_num%i == 0){
      prime_flag = 1;
    }
  }
  
  if(in_num != 1){
    if(prime_flag == 0){
      return 1;
    }
  }
  
  return 0;
}


int main(void) {
  int array_in[50], array_in_size, odd_prime_sum = 0, even_prime_sum = 0, odd_prime_flag = 0, even_prime_flag = 0;
  printf("Enter the size of the array\n");
  scanf("%d", &array_in_size);
  printf("Input %d integer numbers\n", array_in_size);
  for(int i=0; i<array_in_size; i++)
    scanf("%d", &array_in[i]);
    
  // check odd prime is available !!!
  for(int i=1; i<array_in_size; i = i+2){
    if(isPrime(array_in[i])){
      odd_prime_flag = 1;
    }
  }
  
  // check even prime is available !!!
  for(int i=0; i<array_in_size; i = i+2){
    if(isPrime(array_in[i])){
      even_prime_flag = 1;
    }
  }
  
  // perform prime Summation for odd
  if(odd_prime_flag){
    printf("Odd positioned prime numbers are\n");
    for(int i=1; i<array_in_size; i = i+2){
      if(isPrime(array_in[i])){
        printf("%d\n", array_in[i]);
        odd_prime_sum = odd_prime_sum + array_in[i];
      }
    }
    printf("Summation is %d\n", odd_prime_sum);
  }else{
    printf("No odd positioned prime numbers\n");
  }
  
  // perform prime Summation for Even
  if(even_prime_flag){
    printf("Even positioned prime numbers are\n");
    for(int i=0; i<array_in_size; i = i+2){
      if(isPrime(array_in[i])){
        printf("%d\n", array_in[i]);
        even_prime_sum = even_prime_sum + array_in[i];
      }
    }
    printf("Summation is %d\n", even_prime_sum);
  }else{
    printf("No even positioned prime numbers\n");
  }
  return 0;
}
