#include <stdio.h>

int main(void) {
  int in_array[50], in_array_size;
  printf("Enter the size of the array\n");
  scanf("%d", &in_array_size);
  printf("Enter %d integer elements\n", in_array_size);
  for(int i=0; i<in_array_size; i++)
    scanf("%d", &in_array[i]);
    
  printf("Final output is\n");
  
  int smaller = 0;
  int k = 0;
  for(int i=0; i<in_array_size; i++){
    for(int j=0; j<in_array_size; j++){
      int dif = in_array[i] - in_array[j];
      if(dif>0){
        if(smaller == 0){
          smaller = dif;
          k = j;
        }else if(smaller > dif){
          smaller = dif;
          k = j;
        }
      }
    }
    
    if(smaller == 0){
      printf("-1 ");
    }else{
      printf("%d ", in_array[k]);
    }
    smaller = 0;
    k = 0;
  }
  
  
  return 0;
}
