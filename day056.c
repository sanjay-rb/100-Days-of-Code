#include <stdio.h>
#include <stdlib.h>

// Left rotation function....
void shiftArrayLeft(int *array_pointer, int array_size){
  int temp = *(array_pointer+0);
  for(int i=0 ; i<array_size; i++)
    *(array_pointer+i) = *(array_pointer+(i+1));
  *(array_pointer+(array_size-1)) = temp;
}

// Right rotation function....
void shiftArrayRight(int *array_pointer, int array_size){
  int temp = *(array_pointer+(array_size-1));
  for(int i=(array_size-1) ; i>=0; i--)
    *(array_pointer+i) = *(array_pointer+(i-1));
  *(array_pointer+0) = temp;
}

int main(void) {
  
  int *array_pointer, array_size, times_of_rotation, side_of_rotation;
  
  printf("Enter the size of the array\n");
  scanf("%d", &array_size);
  array_pointer = (int *) calloc(array_size, sizeof(int));
  
  // get Input array....
  printf("Input %d numbers\n", array_size);
  for(int i=0; i<array_size; i++){
    scanf("%d", &(*(i+array_pointer)));
  }
  
  // get which side_of_rotation....
  printf("Want to perform left rotate or right rotate?\n1.Left rotate\n2.Right rotate");
  scanf("%d", &side_of_rotation);
  
  // get number of times rotation....
  printf("Input number of times to rotate\n");
  scanf("%d", &times_of_rotation);
  
  // perform rotation based on side_of_rotation....
  if(side_of_rotation == 1){
    // rotating the array for the given times....
    for(int i=0; i<times_of_rotation; i++)
      shiftArrayLeft(array_pointer, array_size);
    
    // printing the output array....
    printf("Array after left rotation %d time(s)\n", times_of_rotation);
    for(int i=0; i<array_size; i++)
      printf("%d\n", *(array_pointer+i));
  }else{
    // rotating the array for the given times....
    for(int i=0; i<times_of_rotation; i++)
      shiftArrayRight(array_pointer, array_size);
      
    // printing the output array....
    printf("Array after right rotation %d time(s)\n", times_of_rotation);
    for(int i=0; i<array_size; i++)
      printf("%d\n", *(array_pointer+i));
  }
  
  return 0;
}
