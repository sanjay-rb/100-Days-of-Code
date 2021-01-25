#include <stdio.h>

int main(void) {
  int in_N, in_M, spiral_matrix[10][10];
  printf("Enter the value for N\n");
  scanf("%d", &in_N);
  printf("Enter the value for M\n");
  scanf("%d", &in_M);
  int start_row = 0, start_column = 0, end_row = in_N, end_column = in_M, i, array_value=1;
  
  while(start_row<end_row && start_column<end_column){
    
    // Left to Right....
    for(i=start_column; i<end_column; ++i){
      spiral_matrix[start_row][i] = array_value;
      array_value++;
    }
    start_row++;
    
    // Top to Bottom....
    for(i=start_row; i<end_row; ++i){
      spiral_matrix[i][end_column-1] = array_value;
      array_value++;
    }
    end_column--;
    
    // Right to Left....
    if(start_row<end_row){
      for(i=end_column-1; i>=start_column; --i){
        spiral_matrix[end_row-1][i] = array_value;
        array_value++;
      }
      end_row--;
    }
    
    // Bottom to Top....
    if(start_column<end_column){
      for(i=end_row-1; i>=start_row; --i){
        spiral_matrix[i][start_column] = array_value;
        array_value++;
      }
      start_column++;
    }
  }
  
  // Print Output Spiral Matrix 
  printf("The final spiral matrix is\n");
  for(int i=0; i<in_N; i++){
    for(int j=0; j<in_M; j++){
      printf("%d ", spiral_matrix[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
