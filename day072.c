#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  int iteration_count;
  scanf("%d", &iteration_count);
  char * design_array_ptr = calloc(iteration_count, sizeof(char));
  
  for(int i=0 ; i<iteration_count; i++)
        *(design_array_ptr + i) = ' ';
        
  for(int i=0; i<iteration_count; i++){
    if(i%2 == 0){
        *(design_array_ptr + i) = '0';
        printf("%s", design_array_ptr);
        for(int i=iteration_count-1; i>=0; i--)
          printf("%c", *(design_array_ptr + i));
        printf("\n");
    }else{
        *(design_array_ptr + i) = '1';
        printf("%s", design_array_ptr);
        for(int i=iteration_count-1; i>=0; i--){
          if(*(design_array_ptr + i) == '0')
            printf("%c", '1');
          else if(*(design_array_ptr + i) == '1')
            printf("%c", '0');
          else
            printf("%c", ' ');
        }
        printf("\n");
      }
    }
  return 0;
}
