#include <stdio.h>

int matrix[50][50];

void printData(int str_row, int str_col, int end_row, int end_col){
    for(int i=str_row, j=str_col; i>=end_row && j<=end_col; i--, j++){
        printf("%d ",matrix[i][j]);
    }
    printf("\n");
}

int main(void) {
   int in_row, in_col;
  
  printf("Enter the no. of rows\n");
  scanf("%d", &in_row);
  printf("Enter the no. of columns\n");
  scanf("%d", &in_col);
  
  for(int i=0; i<in_row; i++)
    for(int j=0; j<in_col; j++){
      printf("insert the element for %d,%d\n", i, j);
      scanf("%d", &matrix[i][j]);
    }
  
  
  printf("The matrix is\n");
  for (int i=0; i<in_row; i++){ 
    for (int j=0; j<in_col; j++){
      if(j!=in_col-1)
        printf("%d\t",matrix[i][j]); 
      else
        printf("%d",matrix[i][j]); 
    }
    printf("\n"); 
  } 
  
  
  printf("Result is\n");
  if(in_row == in_col){
    for(int i=0; i<in_row; i++)
      printData(i, 0, 0, i);
      
    for(int i = 1; i< in_col; i++)
      printData(in_col-1, i, i, in_col-1);
  }else if(in_row>in_col){
    for(int i=0; i<in_row-1; i++)
      printData(i, 0, 0, i);
    
    for(int i = 0; i<in_col-1; i++)
      printData(in_row-1, i, i+1, in_col-1);
      
    printf("%d", matrix[in_row-1][in_col-1]);
  }else{
    for(int i=0; i<in_row; i++)
      printData(i, 0, 0, i);
      
    for(int i=1; i<in_col; i++)
      printData(in_row-1, i, i-1, in_col-1);
  }
  return 0;
}
