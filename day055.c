#include <stdio.h>
#include <stdlib.h>

void shiftArray(int *array_pointer, int array_size){
  int i = 0 ;
  int temp = *(array_pointer+i);
  for(i=0 ; i<array_size; i++){
    *(array_pointer+i) = *(array_pointer+(i+1));
  }
  *(array_pointer+(i-1)) = temp;
}

int main(void) {
  int *array_pointer, array_size, times_of_rotation;
  
  // pointer array....
  printf("Enter the size of the array\n");
  scanf("%d", &array_size);
  array_pointer = (int *) calloc(array_size, sizeof(int));
  
  // get Input array....
  printf("Input %d numbers\n", array_size);
  for(int i=0; i<array_size; i++){
    scanf("%d", &(*(i+array_pointer)));
  }
  
  // get number of times rotation....
  printf("Input number of times to rotate\n");
  scanf("%d", &times_of_rotation);
  
  // rotating the array for the given times....
  for(int i=0; i<times_of_rotation; i++)
    shiftArray(array_pointer, array_size);
  
  // printing the output array....
  printf("Array after left rotation %d time(s)\n", times_of_rotation);
  for(int i=0; i<array_size; i++)
    printf("%d\n", *(array_pointer+i));
    
  return 0;
}
