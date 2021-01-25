#include <stdio.h>
#include <math.h>
int main(void) {
  int sum, a, b, c, area;
 
    printf("Enter the values of a, b and c \n");
    scanf("%d %d %d", &a, &b, &c);
    sum = (a + b + c) / 2;
    area = sqrt(sum * (sum - a) * (sum - b) * (sum - c));
    printf("Area of a triangle = %d \n", area);
  return 0;
}
