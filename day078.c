#include <stdio.h>

int checkMePrime(int in_num){
  int i, prime_flag = 0;
  
  for(i=2; i<= in_num/2; i++){
    if(in_num%i == 0){
      prime_flag = 1;
    }
  }
  
  if(in_num != 1){
    if(prime_flag == 0){
      return 0;
    }
  }
  return 1;
}

int main(void) {
  int num;
  printf("Enter the value for N\n");
  scanf("%d", &num);
  
  // Check given no is prime....
  if(checkMePrime(num)){
    // find next prime no....
    int next_prime = num+1;
    while(checkMePrime(next_prime)){
      next_prime++;
    }
    // and difference....
    int dif_next_prime = next_prime - num;
    
    // find previous prime no....
    int prev_prime = num-1;
    while(checkMePrime(prev_prime)){
      prev_prime--;
    }
    // and difference
    int dif_prev_prime = num - prev_prime;
    
    // compare the two difference....
    dif_next_prime < dif_prev_prime ? printf("Result is %d", dif_next_prime) : printf("Result is %d", dif_prev_prime);
    
  }else{
    printf("Result is 0");
  }
  return 0;
}
