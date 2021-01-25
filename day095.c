#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int isNarcissisticNumber(int);
void generateNarcissisticNumber();


int main(void) {
  int choice, in_number;
  printf("Choose the option\n1.Check Narcissistic Number\n2.Generate first 15 Narcissistic Numbers\n3.Exit\n");
  scanf("%d", &choice);
  switch(choice){
    case 1:
    printf("Enter a number\n");
    scanf("%d",&in_number);
    if(isNarcissisticNumber(in_number))
      printf("the entered number is a Narcissistic Number" );
    else
      printf("the entered number is not a Narcissistic Number");
      break;
    case 2: generateNarcissisticNumber(); break;
    case 3: exit(0);
  }
  return 0;
}

int isNarcissisticNumber(int number){
  
  int temp = number, no_of_digits=0, sum=0, digit;
  while(temp!=0){
    temp /= 10;
    no_of_digits++;
  }
  
  temp = number;
  for(int i=0;i<no_of_digits;i++){
    digit=temp%10;
    sum=sum+pow(digit,no_of_digits);
    temp /= 10;
  }
  
  return sum == number? 1 : 0;
}

void generateNarcissisticNumber(){
  int i = 1, count = 0;
  printf("The first 15 Narcissistic Numbers are\n");
  while(count < 15){
    if(isNarcissisticNumber(i)){
      printf("%d ", i);
      count++;
    }
    i++;
  }
}
