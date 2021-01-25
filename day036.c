#include <stdio.h>

int main(void) {
  
  int current_array[50], insert_array[50], array_size, insert_element, insert_index, temp;
  printf("Enter the size of the array\n");
  scanf("%d", &array_size);
  printf("Input %d elements\n", array_size);
  
  //get and copy the value to another array
  for(int i=0; i<array_size; i++){
    scanf("%d", &current_array[i]);
    insert_array[i] = current_array[i];
  }
  
  //get element and index to insert
  printf("Enter the value to be inserted\n");
  scanf("%d", &insert_element);
  printf("Enter the index, after the index, value will be inserted\n");
  scanf("%d", &insert_index);
  
  //insertion performed here !!!
  for(int i=array_size-1; i>insert_index; i--)
    insert_array[i+1] = insert_array[i];
  insert_array[insert_index+1] = insert_element;
  
  //result printing...
  printf("The current list of the array\n");
  for(int i=0; i<array_size; i++)
    printf("%d ", current_array[i]);
  printf("\nAfter Insert the element the new list is\n");
  for(int i=0; i<array_size+1; i++)
    printf("%d ", insert_array[i]);
  return 0;
}
