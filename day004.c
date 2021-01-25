#include <stdio.h>

int main(void) {
  int number1, number2, heytemp;
  scanf("%d%d", &number1, &number2);
  printf("before swapping values are %d %d\n", number1, number2);
  heytemp = number1;
  number1 = number2;
  number2 = heytemp;
  printf("after swapping values are %d %d", number1, number2);
  return 0;
}
