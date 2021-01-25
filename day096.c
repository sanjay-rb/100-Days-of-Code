#include <stdio.h>
#include <stdlib.h>

int isAutomorpicNumber(int);
void generateAutomorpicNumber();

int main(void) {
  int choice, in_number;
  printf("Choose the option\n 1.Check Automorphic Number\n 2.Generate Automorphic Numbers between 1 & 1000\n 3.Exit\n");
  scanf("%d", &choice);
  
  switch(choice){
    case 1: 
      printf("Enter a number\n");
      scanf("%d", &in_number);
      isAutomorpicNumber(in_number)? printf("the entered number is a Automorphic Number\n") : printf("the entered number is not a Automorphic Number\n");
      break;
    case 2:
      generateAutomorpicNumber();
      break;
    default:
      exit(0);
  }
  return 0;
}

int isAutomorpicNumber(int number){
  int number_of_digit = 0, end_digit_tens = 1;
  int sqr = number * number;
  
  int temp = number;
  while(temp != 0){
    temp /= 10; number_of_digit++;
  }
  
  for(int i=0; i<number_of_digit; i++){
    end_digit_tens *= 10;
  }
  
  int end_digit = sqr % end_digit_tens;
  
  return (number == end_digit)? 1 : 0;
}

void generateAutomorpicNumber(){
  printf("Automorphic Numbers between 1 & 1000 are\n");
  for(int i=1; i<=1000; i++) if(isAutomorpicNumber(i)) printf("%d ", i);
}
