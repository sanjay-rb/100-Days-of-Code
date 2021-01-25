#include <stdio.h>

void sortArray(int in_array[],int array_size){
  int temp;
  
  for(int i=0; i<array_size; i++){
    for(int j=i+1; j<array_size; j++){
      if(in_array[i] > in_array[j]){
        temp = in_array[i];
        in_array[i] = in_array[j];
        in_array[j] = temp;
      }
    }
  }
  
  for(int i=0; i<array_size; i++){
    printf("%d\n", in_array[i]);
  }
}

int main(void) {
  int array_size, int_array[50], positive_array[50], negative_array[50], p_i =0, n_i =0;
  printf("Enter the size of the array\n");
  scanf("%d", &array_size);
  printf("Input %d integer numbers\n", array_size);
  for(int i = 0; i<array_size; i++){
    scanf("%d", &int_array[i]);
  }
  
  for(int i=0; i<array_size; i++){
    if(int_array[i] < 0){
      negative_array[n_i] = int_array[i];
      n_i++;
    }else{
      positive_array[p_i] = int_array[i];
      p_i++;
    }
  }
  
  printf("Positive numbers are\n");
  sortArray(positive_array, p_i);
  printf("Negative numbers are\n");
  sortArray(negative_array, n_i);
  
  return 0;
}
