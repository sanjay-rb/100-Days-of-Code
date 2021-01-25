#include <stdio.h>
int main(void) {
  int no_of_row, no_of_column, matrix[50][50], sum_of_all=0;
  printf("Enter the no. of rows\n");
  scanf("%d", &no_of_row);
  printf("Enter the no. of columns\n");
  scanf("%d", &no_of_column);
  
  // check for n*n matrix....
  if(no_of_row == no_of_column){
    
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
    
    
    printf("Diagonal elements are ->");
    // get left to right Diagonal elements....
    for(int i=0; i<no_of_row; i++){
      printf("%d,", matrix[i][i]);
      sum_of_all = sum_of_all + matrix[i][i];
    }
    
    // get right to left Diagonal elements....
    for(int i=0, j=(no_of_row-1); i<no_of_row && j>=0; i++, j--){
      if(i == no_of_row-1)
        printf("%d\n", matrix[i][j]);
      else
        printf("%d,", matrix[i][j]);
      sum_of_all = sum_of_all + matrix[i][j];
    }
    
    // sum of all Diagonal elements
    printf("Sum of all the elements -> %d", sum_of_all);
  }else{
    printf("Make sure your input matrix should be in nxn format\n");
  }
  return 0;
}
