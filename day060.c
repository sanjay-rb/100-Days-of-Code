#include <stdio.h>
#include <stdlib.h>

int checkSubarray(int *in_array, int in_array_size, int start_path, int sum_of_respective){
  int end_path = -1, i, temp_sum = 0;
  for(i = start_path; i < in_array_size; i++){
    temp_sum += in_array[i];
    if(temp_sum == sum_of_respective){
      end_path = i;
    }
    if(temp_sum > sum_of_respective){
      break;
    }
  }
  return end_path;
}

int main(void) {
  int *in_array, sum_of_respective, in_array_size, i, sub_array_found_flag = 0, start_path, end_path;
  
  printf("Enter array length and sum respectively");
  scanf("%d", &in_array_size);
  scanf("%d", &sum_of_respective);
  
  in_array = (int*) calloc(in_array_size, sizeof(int));
  
  printf("\nenter %d elements", in_array_size);
  for(i = 0; i < in_array_size; i++){
    scanf("%d", &in_array[i]);
  }
  
  for(i = 0; i < in_array_size; i++){
    start_path = i;
    end_path = checkSubarray(in_array, in_array_size, start_path, sum_of_respective);
    if(end_path != -1){
      sub_array_found_flag = 1;
      break;
    }
  }
  
  
  if(sub_array_found_flag == 1){
    printf("\nSubarray is ");
    for(i = start_path; i <= end_path; i++){
      printf("%d ", in_array[i]);
    }
  }else{
    printf("\nSubarray not found");
  }
  return 0;
}
