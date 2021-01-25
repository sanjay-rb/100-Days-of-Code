#include <stdio.h>
#define NOT_IN_ARRAY 1000000

int main(void) {
  int array_in[50], array_size, temp, number_count=1, current_number;
  printf("Enter the size of the array\n");
  scanf("%d", &array_size);
  printf("Input %d integer numbers\n", array_size);
  for(int i=0; i<array_size; i++){
    scanf("%d", &array_in[i]);
  }
  
  for(int i=0; i<array_size; i++){
    for(int j =i+1; j<array_size+1; j++){
      if(array_in[i] == array_in[j]){
        number_count++;
        array_in[j] = NOT_IN_ARRAY;
      }
    }
    if(array_in[i] != NOT_IN_ARRAY){
      printf("%d occurs %d time(s)\n", array_in[i], number_count);
    }
    number_count = 1;
  }
  return 0;
}
