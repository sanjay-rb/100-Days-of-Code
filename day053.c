#include <stdio.h>

int main(void) {
  
  int no_of_row, no_of_column, matrix[50][50], T = 0;
  printf("Enter the no. of rows\n");
  scanf("%d", &no_of_row);
  printf("Enter the no. of columns\n");
  scanf("%d", &no_of_column);
  
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
      if(matrix[i][j] == 0)
        T++;
    }
    printf("\n");
  }
  
  // Find Sparse matrix or not....
  if(T >= ((no_of_row * no_of_column) / 2 ))
    printf("The given matrix is a sparse matrix.\n");
  else
    printf("The given matrix is not a sparse matrix.\n");
  
  return 0;
}
