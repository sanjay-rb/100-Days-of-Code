#include <stdio.h>

int main(void) {
  int in_array[50], array_size, sum=0;
  printf("Enter the size of the array\n");
  scanf("%d", &array_size);
  printf("Input %d integer numbers\n", array_size);
  for(int i=0; i<array_size; i++){
    scanf("%d", &in_array[i]);
  }
  
  printf("The sum of the array elements \n");
  for(int i=0; i<array_size; i++){
    sum = sum + in_array[i];
  }
  printf("%d", sum);
  return 0;
}
