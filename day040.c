#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int iteration_count;
  scanf("%d", &iteration_count);
  int design_array_size = (iteration_count*2);
  int space_array = design_array_size;
  char design_array[50];
  char * design_array_ptr = calloc(design_array_size, sizeof(char));
  
  for(int i=0; i<design_array_size; i++){
    if(i%2 == 0)
      design_array[i] = '*';
    else
      design_array[i] = ' ';
  }
  
  int len = strlen(design_array);
  if(len == design_array_size){
    for(int count = 0; count<iteration_count; count++){
        if(space_array != design_array_size)
          design_array[space_array] = ' ';
      printf("%s", design_array);
    	for (int i = len - 1; i >= 0; i--)
    	{
    		printf("%c", design_array[i]);
    	}
    	
    	printf("\n");
      space_array = space_array - 2;
    }
    
    for(int count = 0; count<iteration_count; count++){
        if(space_array != 0)
          design_array[space_array] = '*';
      printf("%s", design_array);
    	for (int i = len - 1; i >= 0; i--)
    	{
    		printf("%c", design_array[i]);
    	}
    	printf("\n");
      space_array = space_array + 2;
    }
  }else{
    for(int i=0; i<design_array_size; i++){
      if(i%2 == 0)
        *(design_array_ptr+i) = '*';
      else
        *(design_array_ptr+i) = ' ';
    }
    
    len = strlen(design_array_ptr);
    for(int count = 0; count<iteration_count; count++){
      if(space_array != design_array_size)
        *(design_array_ptr + space_array) = ' ';
      printf("%s", design_array_ptr);
      for (int i = len - 1; i >= 0; i--)
    	{
    		printf("%c", *(design_array_ptr + i));
    	}
    	printf("\n");
      space_array = space_array - 2;
    }
    
    for(int count = 0; count<iteration_count; count++){
        if(space_array != 0)
          *(design_array_ptr + space_array) = '*';
      printf("%s", design_array_ptr);
    	for (int i = len - 1; i >= 0; i--)
    	{
    		printf("%c", *(design_array_ptr + i));
    	}
    	printf("\n");
      space_array = space_array + 2;
    }
  }
  return 0;
}
