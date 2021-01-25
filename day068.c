#include <stdio.h>

int main(void) {
  int in_array[15], in_array_size;
  printf("Enter the size of the array\n");
  scanf("%d", &in_array_size);
  printf("Enter %d elements\n", in_array_size);
  for(int i=0; i<in_array_size; i++)
    scanf("%d", &in_array[i]);
  
  for(int i=0; i<in_array_size; i++){
    for(int j = i+1; j<in_array_size; j++){
      // check duplicates....
      if(in_array[i] == in_array[j]){
        in_array[j]++;
      }else{
        break;
      }
    }
  }
  
  printf("Result after replacing duplicates\n");
  for(int i=0; i<in_array_size; i++)
    printf("%d\n", in_array[i]);
  return 0;
}
