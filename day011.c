#include <stdio.h>

void swap(int *x,int *y){
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

int main(void) {
  int in_number_1, in_number_2;
  printf("enter 2 numbers to swap\n");
  scanf("%d%d", &in_number_1, &in_number_2);
  printf("before swapping a and b are %d and %d\n", in_number_1, in_number_2);
  swap(&in_number_1, &in_number_2);
  printf("after swapping a and b are %d and %d", in_number_1, in_number_2);
  return 0;
}
