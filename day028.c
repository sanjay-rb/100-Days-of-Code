#include <stdio.h>
int* ascend(int a[]);
int* descend(int a[]);
int s_largest(int a[]);
int s_smallest(int a[]);
int size_array;

int main(void) {
  //let your logic goes here
  //you should engage the stack by calling 4 user defined mentods 
  //for four different functionalities required
  int number_array[50];
  printf("Enter the size of the array\n");
  scanf("%d", &size_array);
  printf("Input %d integer numbers\n", size_array);
  for(int i=0; i<size_array; i++){
    scanf("%d", &number_array[i]); 
  }
  
  int *a_p = ascend(number_array);
  printf("array contents in ascending order are\n");
  for(int i=0; i<size_array; i++){
    printf("%d\n", *(a_p + i));
  }
  int *d_p = descend(number_array);
  printf("array contents in descending order are\n");
  for(int i=0; i<size_array; i++){
    printf("%d\n", *(d_p + i));
  }
  printf("second largest element in a given array is \n%d\n", s_largest(number_array));
  printf("second smallest element in a given array is \n%d\n", s_smallest(number_array));
}
int* ascend(int a[]){
  int temp;
  for(int i=0; i<size_array; i++){
    for(int j=i+1; j<size_array; j++){
      if(a[i] > a[j]){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  return a;
}
int* descend(int a[]){
  int temp;
  for(int i=0; i<size_array; i++){
    for(int j=i+1; j<size_array; j++){
      if(a[i] < a[j]){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  return a;
}
int s_largest(int a[]){
  int *p = descend(a);
  return *(p + 1);
}
int s_smallest(int a[]){
  int *p = ascend(a);
  return *(p + 1);
}
