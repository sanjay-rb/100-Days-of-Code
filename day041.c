#include <stdio.h>

int main(void) {
  
  int main_array[50], main_array_size, subarray_flag = 0;
  printf("Enter the size of the array\n");
  scanf("%d", &main_array_size);
  printf("Input %d elements\n", main_array_size);
  for(int i=0; i<main_array_size; i++)
    scanf("%d", &main_array[i]);
  for(int i=0; i<main_array_size; i++){
    for(int j=i+1; j<main_array_size; j++){
      if(main_array[i] + main_array[j] == 0){
        printf("subarray [%d,%d]’s sum is 0", main_array[i], main_array[j]);
        subarray_flag = 1;
      }
    }
  }
  
  if(subarray_flag == 0)
    printf("no subarray yields 0 as sum\n");
  return 0;
}
