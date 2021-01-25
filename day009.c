#include <stdio.h>

int main(void) {
  int in_number, sum = 0, i;
  float avg;
  printf("Input the 10 numbers :\n");
  for(i = 1; i <=10; i++){
    scanf("%d", &in_number);
    sum = sum + in_number;
  }
  
  printf("The sum of 10 no is : %d\n", sum);
  avg = sum / 10.0;
  printf("The Average is : %f", avg);
   return 0;
}
