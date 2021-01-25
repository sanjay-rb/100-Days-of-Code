#include <stdio.h>
#include <math.h>

int main(void) {
  int side;
  printf("Enter the length of a side\n");
  scanf("%d", &side);
  printf("Surface area = %f and Volume = %f", ( 6 * pow(side, 2) ), ( pow(side, 3) ) );
  return 0;
}
