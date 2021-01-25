#include <stdio.h>

int equalArray(int a[], int len){
  for(int i=0; i<len; i++){
    while(a[i] % 2 == 0)
      a[i] /= 2;
      
    while(a[i] % 3 == 0)
      a[i] /= 3;
  }
  
  for(int i=0; i<len; i++)
    if(a[i] != a[0])
      return 0;
  
  return 1;    
}


int main(void) {
  int arr[50], arr_size;
  printf("Enter the size of the array\n");
  scanf("%d", &arr_size);
  printf("Enter %d elements", arr_size);
  for(int i=0; i<arr_size; i++)
    scanf("%d", &arr[i]);
  
  if(equalArray(arr, arr_size))
    printf("Yes, it’s possible to make all numbers of an array equal\n");
  else
    printf("No, it’s not possible to make all numbers of an array equal\n");
  
  return 0;
}
