#include <stdio.h>

int checkForsub_seq(int num_1, int num_2){
  int num_1_digit, num_2_digit;
  while(num_1 != 0){
    num_1_digit = num_1%10;
    while(num_2 != 0){
      num_2_digit = num_2%10;
      if(num_1_digit == num_2_digit)
        return num_1;
      else
        num_2 /= 10;
    }
    num_1 /= 10;
  }
  
  return 0;
}

int main(void) {
  int arr[50], arr_size, flag, adj_ele[50], final_arr[50];
  printf("Enter the size of the array\n");
  scanf("%d", &arr_size);
  printf("Enter %d elements\n", arr_size);
  for(int i=0; i<arr_size; i++)
    scanf("%d", &arr[i]);
    
  int k = 0;
  for(int i=0; i<arr_size; i++){
    for(int j=i+1; j<arr_size; j++){
      if(checkForsub_seq(arr[i], arr[j])){
        adj_ele[k] = arr[i];
        k++;
        adj_ele[k] = arr[j];
        k++;
      }
    }
  }
  
  int count = 0, d=0;
  for (int c = 0; c < k; c++){
    for (d = 0; d < count; d++)
    {
      if(adj_ele[c] == final_arr[d])
        break;
    }
    if (d == count)
    {
      final_arr[count] = adj_ele[c];
      count++;
    }
  }
  
  
  printf("The longest subsequence is ");
  for(int i=0; i<count; i++){
    if(i==count-1){
      printf("%d", final_arr[i]);
    }else{
      printf("%d,", final_arr[i]);
    }
  }
  return 0;
}
