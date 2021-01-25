#include <stdio.h>

// Find Factorial Of number....
int find_fact(int n){
  if (n > 1)
    return n * find_fact(n-1);
  else
    return 1;
}

// Check for the Strong number....
int checkStrongNumber(int number){
  int sum_of_factorial = 0;
  int temp = number;
  while(number!=0){
    int digit = number%10;
    sum_of_factorial += find_fact(digit);
    number = number/10;
  }
  if(sum_of_factorial == temp){
    return 1;
  }else{
    return 0;
  }
}


int main(void) {
  int limit, result_array[50], j=0;
  printf("Enter the limit\n");
  scanf("%d", &limit);
  
  // checkStrongNumber from 1 to limit....
  for(int i=1; i<=limit; i++){
    if(checkStrongNumber(i)){
      result_array[j] = i;
      j++;
    }
  }
  
  
  // print the result....
  for(int i=0; i<j; i++){
    if(i == j-1)
      printf("%d", result_array[i]);
    else
      printf("%d,", result_array[i]);
  }
  printf(" are Strong numbers between 1 & %d\n", limit);
  return 0;
}
