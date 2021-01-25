#include <stdio.h>

int main(void) {
  int in_array[50], in_array_size;
  printf("Enter the size of the array\n");
  scanf("%d", &in_array_size);
  printf("Enter %d elements\n", in_array_size);
  for(int i=0; i<in_array_size; i++)
    scanf("%d", &in_array[i]);
    
  // Sort the given array....
  for(int i=0; i<in_array_size; i++){
    for(int j=i+1; j<in_array_size; j++){
      if(in_array[i] > in_array[j]){
        int temp = in_array[i];
        in_array[i] = in_array[j];
        in_array[j] = temp;
      }
    }
  }
  
  printf("Smallest pair is [%d,%d]\n", in_array[0], in_array[1]);
  printf("Sum of the smallest pair is %d", (in_array[0]+in_array[1]));
  
  return 0;
}
