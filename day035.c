#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int first_array[50], second_array[50], first_array_size, second_array_size, merge_array[50], merge_array_size = 0, swap_temp;
  printf("Input the number of elements to be stored in the first array\n");
  scanf("%d", &first_array_size);
  printf("Input %d elements in the array\n", first_array_size);
  for(int i=0; i<first_array_size; i++)
    scanf("%d", &first_array[i]);
  printf("Input the number of elements to be stored in the second array\n");
  scanf("%d", &second_array_size);
  
  if(first_array_size == second_array_size){
    printf("Input %d elements in the array\n", second_array_size);
    for(int i=0; i<second_array_size; i++)
      scanf("%d", &second_array[i]);
      
    for(int i=1; i<=2; i++){
      if(i == 1){
        for(int j =0; j<first_array_size; j++){
          merge_array[merge_array_size] = first_array[j];
          merge_array_size++;
        }
      }else if(i == 2){
        for(int j =0; j<second_array_size; j++){
          merge_array[merge_array_size] = second_array[j];
          merge_array_size++;
        }
      }
    }
    
    for(int i=0; i<merge_array_size; i++){
      for(int j=i+1; j<merge_array_size; j++){
        if(merge_array[i] < merge_array[j]){
          swap_temp = merge_array[i];
          merge_array[i] = merge_array[j];
          merge_array[j] = swap_temp;
        }
      }
    }
    printf("The merged array in descending order is\n");
    for(int i=0; i<merge_array_size; i++)
      printf("%d ", merge_array[i]);
  }else{
    printf("make sure both the arrays must be with the same size\n");
    exit(0);
  }
  return 0;
}
