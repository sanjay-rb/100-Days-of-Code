#include <stdio.h>

int main(void) {
  int in_array[50], in_array_size, sum_triangle[50][50];
  printf("Enter the size of the array\n");
  scanf("%d", &in_array_size);
  printf("Enter %d elements\n", in_array_size);
  for(int i=0; i<in_array_size; i++)
    scanf("%d", &in_array[i]);
    
  // last row....
  for(int i=0; i<in_array_size; i++)
    sum_triangle[in_array_size-1][i] = in_array[i];
    
  // above rows....
  for (int i = in_array_size-2; i >=0; i--) 
      for (int j = 0; j <= i; j++) 
        sum_triangle[i][j] = sum_triangle[i+1][j] + sum_triangle[i+1][j+1];
     
  // print sum_triangle....   
  printf("Sum Triangle is\n");
  for(int i=0; i<in_array_size; i++){
    for(int j=0; j<in_array_size; j++){
      if(i < in_array_size-1){
        if(sum_triangle[i][j] != 0){
              printf("%d ", sum_triangle[i][j]);
        }
      }else{
        printf("%d ", sum_triangle[i][j]);
      }
    }
    printf("\n");
  }
  return 0;
}
