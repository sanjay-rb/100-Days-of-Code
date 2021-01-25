#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char design_array[50];
  int iteration_count;
  scanf("%d", &iteration_count);
  int design_array_size = (iteration_count*4);
  char * design_array_ptr = calloc(design_array_size, sizeof(char));
  
  for(int i=0 ; i<design_array_size; i++)
        *(design_array_ptr + i) = ' ';
        
  if(strlen(design_array_ptr) == design_array_size){
    for(int i=0; i<iteration_count*2; i+=2){
      *(design_array_ptr + i) = '*';
      *(design_array_ptr + (design_array_size-i-1)) = '*';
      printf("%s\n", design_array_ptr);
    }
  
    for(int i=iteration_count*2; i>=1; i-=2){
      *(design_array_ptr + i) = ' ';
      *(design_array_ptr + (design_array_size-i-1))  = ' ';
      printf("%s\n", design_array_ptr);
    }
    
    free(design_array_ptr);
  }else{
    for(int i=0 ; i<design_array_size; i++)
          design_array[i] = ' ';
          
    for(int i=0; i<iteration_count*2; i+=2){
        design_array[i] = '*';
        design_array[(design_array_size-i-1)] = '*';
        printf("%s\n", design_array);
    }
    
    for(int i=iteration_count*2; i>=1; i-=2){
      design_array[i] = ' ';
      design_array[(design_array_size-i-1)]  = ' ';
      printf("%s\n", design_array);
    }
  }
  return 0;
}
