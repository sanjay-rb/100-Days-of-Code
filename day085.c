#include <stdio.h>

int main(void) {
  int array[50], array_size;
  printf("Enter the size of the array\n");
  scanf("%d", &array_size);
  printf("Enter %d elements\n", array_size);
  for(int i=0; i<array_size; i++)
    scanf("%d", &array[i]);
  
  int sum = 0;
  for(int i=0; i<array_size; i++){
    int j = i+1;
    while(array[i] < array[j]){
      array[j] = array[j] - array[i];
    }
    
    sum += array[i];
  }
  
  printf("Result is %d", sum);
  return 0;
}
