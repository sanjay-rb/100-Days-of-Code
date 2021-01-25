#include <stdio.h>
long int find_fact(int);
int main(void) {
  //get the input from the user and pass the same to find_fact()
  int in_number;
  printf("Enter a number\n");
  scanf("%d", &in_number);
  printf("Factorial of %d is %ld", in_number, find_fact(in_number));
  return 0;
}
long int find_fact(int n){
  //find_fact() should call itself for backward traversal
  if (n > 1)
    return n * find_fact(n-1);
  else
    return 1;
}
