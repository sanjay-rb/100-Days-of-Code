#include <stdio.h>

int main(void) {
  int in_array[50], in_array_size;
  
  printf("Enter the size of the array\n");
  scanf("%d", &in_array_size);
  
  printf("Input %d elements", in_array_size);
  for(int i=0; i<in_array_size; i++)
    scanf("%d", &in_array[i]);
    
  int k=0;
  for(int i=0; i<in_array_size; i++){
    int j=i+1;
    if(in_array[i] == in_array[j])
      k++;
  }
  
  printf("Result is %d", k);
  return 0;
}
