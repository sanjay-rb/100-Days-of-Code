#include <stdio.h>

int main(void) {
  
  int array[50], array_size, unique[50], unique_size = 0;
  printf("Enter the size of the array\n");
  scanf("%d", &array_size);
  printf("Enter %d elements\n", array_size);
  for(int i=0; i<array_size; i++)
    scanf("%d", &array[i]);
    
  // remove duplicate....  
  for(int i=0; i<array_size; i++){
    int j;
    for(j=0; j<unique_size; j++){
      if(array[i] == unique[j]){
        break;
      }
    }
    if(j == unique_size){
      unique[unique_size] = array[i];
      unique_size++;
    }
  }
  
  // print pairs....
  printf("The following pairs are unique pairs\n");
  for(int i=0; i<unique_size; i++){
    for(int j=0; j<unique_size; j++){
      printf("(%d,%d)\n", unique[i], unique[j]);
    }
  }
  
  // print total pairs....
  printf("So the result is %d", (unique_size*unique_size));
  
  return 0;
}
