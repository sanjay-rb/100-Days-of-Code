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
  int store_value, temp;  

  
  while(start_row < end_row && start_col < end_col){
    if(start_row + 1 == end_row || start_col + 1 == end_col)   
      break; 

    // store the first store_value....
    store_value = matrix[start_row + 1][start_col];
    
    // Left to Right....
    for(int i = start_col; i < end_col; i++){ 
      temp = matrix[start_row][i]; 
      matrix[start_row][i] = store_value; 
      store_value = temp; 
    } 
    start_row++;
    
    // Top to Bottom....
    for(int i = start_row; i < end_row; i++){ 
      temp = matrix[i][end_col-1]; 
      matrix[i][end_col-1] = store_value; 
      store_value = temp; 
    } 
    end_col--; 

    // Right to Left....
    if(start_row < end_row){ 
      for(int i = end_col-1; i >= start_col; i--){ 
              temp = matrix[end_row-1][i]; 
              matrix[end_row-1][i] = store_value; 
              store_value = temp; 
      } 
    } 
    end_row--; 

    // Bottom to Top....
    if(start_col < end_col){ 
      for(int i = end_row-1; i >= start_row; i--){ 
              temp = matrix[i][start_col]; 
              matrix[i][start_col] = store_value; 
              store_value = temp; 
      } 
    } 
    start_col++; 
  }
  
  printf("Clockwise Rotation output is\n");      
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
