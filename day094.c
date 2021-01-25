#include <stdio.h>
#include <stdlib.h>
int isCircularPrime(int);
void generateCircularPrime();
int isPrime(int);

int main(void) {
  int choice, in_number;
  printf("Choose the option\n 1.Check Circular Prime\n 2.Generate Circular Prime numbers between 1 & 1000\n 3.Exit\n");
  scanf("%d", &choice);
  
  switch(choice){
    case 1: 
    printf("Enter a number\n");
    scanf("%d", &in_number);
    if(isCircularPrime(in_number)){
      printf("the entered number is a circular prime number\n");
    }else{
      printf("the entered number is a not circular prime number\n");
    } break;
    case 2: generateCircularPrime(); break;
    case 3: exit(0);
  }
  return 0;
}

int isCircularPrime(int in_number){
  int flag = 1, number_of_digit = 0;
  
  int temp = in_number;
  
  
  //get number_of_digit....
  while(temp != 0 ){
    temp /= 10;
    number_of_digit++;
  }
  
  for(int i=0; i<number_of_digit; i++){
    if(isPrime(in_number)){
      int digit = in_number % 10;
      for(int i=0; i<number_of_digit-1; i++){
        digit *= 10;
      }
      in_number = digit + (in_number / 10);
    }else{
      flag = 0;
      break;
    }
  }
  return flag;
}

int isPrime(int number){
  int flag = 0, i;
  if(number == 1){
    return 0;
 }else{
   for(i = 2; i <= number/2; i++){
     if(number%i == 0){
       flag = 1;
       break;
     }
   }
 }
 
 if(flag == 0){
   return 1;
 }else{
   return 0;
 }
}

void generateCircularPrime(){
  printf("The circular prime numbers between 1 & 1000 are\n");
  for(int i=1; i<=1000; i++){
    if(isCircularPrime(i)){
      printf("%d ", i);
    }
  }
}
