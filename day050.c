#include <stdio.h>

int main(void) {
  int array_2d[50][50], no_of_rows, no_of_columns, sum_of_all=0;
  printf("Enter the no. of rows\n");
  scanf("%d", &no_of_rows);
  printf("Enter the no. of columns\n");
  scanf("%d", &no_of_columns);
  for(int i=0; i<no_of_rows; i++){
    for(int j=0; j<no_of_columns; j++){
      printf("insert the element for %d,%d", i, j);
      scanf("%d", &array_2d[i][j]);
    }
  }
  
  printf("The matrix is\n");
  for(int i=0; i<no_of_rows; i++){
    for(int j=0; j<no_of_columns; j++){
      printf("%d ", array_2d[i][j]);
      sum_of_all = sum_of_all + array_2d[i][j];
    }
    printf("\n");
  }
  printf("Sum of all the elements -> %d", sum_of_all);
  return 0;
}
