#include <stdio.h>

int main(void) {
  int currect_array[50], result_array[50], array_size, temp, insert_element;
  printf("Enter the size of the array\n");
  scanf("%d", &array_size);
  printf("Input %d elements\n", array_size);
  for(int i=0; i<array_size; i++){
    scanf("%d", &currect_array[i]);
    result_array[i] = currect_array[i];
  }
  
  for(int i=0; i<array_size; i++){
    for(int j =i+1; j<array_size; j++){
      if(result_array[i] > result_array[j]){
        temp = result_array[i];
        result_array[i] = result_array[j];
        result_array[j] = temp;
      }
    }
  }
  
  for(int i=0; i<array_size; i++)
    currect_array[i] = result_array[i];
  
  printf("Enter the value to be inserted\n");
  scanf("%d", &insert_element);
  int c_index = 0;
  for(int i=0; i<array_size; i++){
    if(result_array[i] < insert_element)
      c_index++;
  }
  
  for(int i=array_size-1; i>c_index-1; i--)
    result_array[i+1] = result_array[i];
  result_array[c_index] = insert_element;
  
  printf("The current list of the array after sorting\n");
  for(int i=0; i<array_size; i++)
    printf("%d ", currect_array[i]);
  printf("\nAfter Insert the element the new list is\n");
  for(int i=0; i<array_size+1; i++)
    printf("%d ", result_array[i]);
    
  return 0;
}
