#include <stdio.h>

int main() { 
  int matrix[20][20], in_row, in_col;
  
  printf("Enter the no. of rows\n");
  scanf("%d", &in_row);
  printf("Enter the no. of columns\n");
  scanf("%d", &in_col);
  
  for(int i=0; i<in_row; i++){
    for(int j=0; j<in_col; j++){
      printf("insert the element for %d,%d\n", i, j);
      scanf("%d", &matrix[i][j]);
    }
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
  
  int start_row = 0, start_col = 0; 
  int end_row=in_row, end_col=in_col;


    // Left to Right....
    for(int i = start_col; i < end_col; i++){ 
      matrix[start_row][i] = 0;
    } 
    start_row++;
    
    // Top to Bottom....
    for(int i = start_row; i < end_row; i++){ 
      matrix[i][end_col-1] = 0;
    } 
    end_col--; 

    // Right to Left....
    if(start_row < end_row){ 
      for(int i = end_col-1; i >= start_col; i--){ 
              matrix[end_row-1][i] = 0;
      } 
    } 
    end_row--; 

    // Bottom to Top....
    if(start_col < end_col){ 
      for(int i = end_row-1; i >= start_row; i--){ 
              matrix[i][start_col] = 0;
      } 
    } 
    start_col++; 

  printf("Result is\n");      
  for(int i=0; i<in_row; i++){ 
    for(int j=0; j<in_col; j++){
        if(j!=in_col-1)
          printf("%d\t",matrix[i][j]); 
        else
          printf("%d",matrix[i][j]); 
    }
    printf("\n"); 
  }
  
  return 0; 
} 
