#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int array_size, input_values, search_value, array_element_found_flag;
  printf("Enter the size of the array\n");
  scanf("%d", &array_size);
  int *array_pointer;
  array_pointer = (int *) calloc(array_size, sizeof(int));
  printf("Input %d integer numbers\n", array_size);
  
  for(int inc = 0; inc<array_size; inc++){
    scanf("%d", &input_values);
    *(array_pointer + inc) = input_values;
  }
  
  printf("Enter the element to be searched\n");
  scanf("%d", &search_value);
 
  printf("%lu bytes allocated successfully\n", (array_size * sizeof(int)));
  for(int inc = 0; inc<array_size; inc++){
   if(*(array_pointer + inc) == search_value){
     printf("Element %d found at index %d", search_value, inc);
     array_element_found_flag = 1; 
   }
  }
  if(array_element_found_flag != 1){
    printf("The element %d is not found in the given array", search_value);
  }
  return 0;
}
