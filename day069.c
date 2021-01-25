#include <stdio.h>

int main(void) {
  
  int in_array[50], in_array_size, even_array[20], even_array_size = 0, odd_array[20], odd_array_size = 0;
  printf("Enter the size of the array\n");
  scanf("%d", &in_array_size);
  printf("Input 6 elements\n");
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
  
  // Seperate even and odd array....
  for(int i=0; i<in_array_size; i++){
    if(in_array[i]%2 == 0){
      even_array[even_array_size] = in_array[i];
      even_array_size++;
    }else{
      odd_array[odd_array_size] = in_array[i];
      odd_array_size++;
    }
  }
  
  // check for the Smallest value....
  if(in_array[0]%2 == 0){
    // if even print even and odd manner....
    printf("Smallest value is %d, so output is Even-Odd pattern", in_array[0]);
    for(int i=0, j=0; i<even_array_size && j<odd_array_size; i++, j++){
      if(j == odd_array_size-1){
        printf("%d,%d", even_array[i], odd_array[j]);
      }else{
        printf("%d,%d,", even_array[i], odd_array[j]);
      }
    }
  }else{
    // if odd print odd and even manner....
    printf("Smallest value is %d, so output is Odd-Even pattern\n", in_array[0]);
    for(int i=0, j=0; i<odd_array_size && j<even_array_size; i++, j++){
      if(j == even_array_size-1){
        printf("%d,%d", odd_array[i], even_array[j]);
      }else{
        printf("%d,%d,", odd_array[i], even_array[j]);
      }
    }
  }
  return 0;
}
