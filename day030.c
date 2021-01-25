#include <stdio.h>

int main(void) {
  int in_array[50], array_size, flag_have_unique = 0;
  printf("Enter the size of the array\n");
  scanf("%d", &array_size);
  printf("Input %d integer numbers\n", array_size);
  for(int i=0; i<array_size; i++){
    scanf("%d", &in_array[i]);
  }
  
  for(int i=0; i<array_size; i++){
    for(int j=i+1; j<array_size; j++){
      if(in_array[i] == in_array[j]){
        in_array[i] = 0;
        in_array[j] = 0;
        flag_have_unique = 1;
      }
    }
  }
  
  if(flag_have_unique == 1){
    printf("The unique elements are\n");
    for(int i=0; i<array_size; i++){
      if(in_array[i] != 0){
        printf("%d\n", in_array[i]);
      }
    }
  }else{
    printf("no unique elements in the given array\n");
  }
  return 0;
}
