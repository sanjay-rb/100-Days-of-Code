#include <stdio.h>

int main(void) {
  int arr[50], k, arr_size;
  printf("Enter the size of the array\n");
  scanf("%d", &arr_size);
  printf("Input %d elements\n", arr_size);
  for(int i=0; i<arr_size; i++)
    scanf("%d", &arr[i]);
  printf("Enter the value for k\n");
  scanf("%d", &k);
  
  int sum = 0, total_pairs = 0;
  for(int i=0; i<arr_size; i++){
    for(int j=i+1; j<arr_size; j++){
      sum = arr[i] + arr[j];
      if(sum%k == 0)
        total_pairs++;
      sum = 0;
    }
  }
  
  printf("Result is %d", total_pairs);
  return 0;
}
