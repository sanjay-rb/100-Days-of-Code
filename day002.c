#include <stdio.h>

int main(void) {
  float pi = 3.14, radius;
  printf("Enter the radius\n");
  scanf("%f", &radius);
  printf("area is %f \n", (pi * radius * radius));
  printf("circumference is %f", (2 * pi * radius));
  
 
  return 0;
}
