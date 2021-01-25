#include <stdio.h>

int main(void) {
  
  int no_of_row, no_of_column, matrix[50][50];
  printf("Enter the no. of rows\n");
  scanf("%d", &no_of_row);
  printf("Enter the no. of columns\n");
  scanf("%d", &no_of_column);
  
  if(no_of_column == 3 && no_of_row == 3){
    // get matrix data....
    for(int i=0; i<no_of_row; i++){
      for(int j=0; j<no_of_column; j++){
        printf("insert the element for %d,%d", i, j);
        scanf("%d", &matrix[i][j]);
      }
    }
    
    // print matrix....
    printf("The matrix is\n");
    for(int i=0; i<no_of_row; i++){
      for(int j=0; j<no_of_column; j++){
        printf("%d ", matrix[i][j]);
      }
      printf("\n");
    }
    
    // Main Diagonal elements....
    printf("Main Diagonal elements are ->");
    for(int i=0; i<no_of_row; i++){
      if(i == no_of_row-1)
        printf("%d\n", matrix[i][i]);
      else
        printf("%d,", matrix[i][i]);
    }
    
    // Secondary Diagonal elements....
    printf("Secondary Diagonal elements are ->");
    for(int i=0, j=(no_of_row-1); i<no_of_row && j>=0; i++, j--){
      if(i == no_of_row-1)
        printf("%d\n", matrix[i][j]);
      else
        printf("%d,", matrix[i][j]);
      matrix[i][i] = matrix[i][j];
    }
    
    // After interchange....
    printf("After interchange, the final matrix is\n");
    for(int i=0; i<no_of_row; i++){
      for(int j=0; j<no_of_column; j++){
        printf("%d ", matrix[i][j]);
      }
      printf("\n");
    }
    
  }else{
    printf("Make sure your input matrix should be in 3x3 format\n");
  }
  return 0;
}
