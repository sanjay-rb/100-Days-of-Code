#include <stdio.h>

int main(void) {
  int no_of_row, no_of_column, matrix[50][50], row_sum = 0, column_sum = 0;
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
    }
    printf("\n");
  }
  
  // Sum of rows....
  for(int i=0; i<no_of_row; i++){
    for(int j=0; j<no_of_column; j++){
      row_sum += matrix[i][j];
    }
    printf("Sum of row%d->%d\n", i+1, row_sum);
    row_sum = 0;
  }
  
  // Sum of columns.... 
  for(int i=0; i<no_of_column; i++){
    for(int j=0; j<no_of_row; j++){
      column_sum += matrix[j][i];
    }
    printf("Sum of column%d->%d\n", i+1, column_sum);
    column_sum = 0;
  }
  return 0;
}
