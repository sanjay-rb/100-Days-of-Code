#include <stdio.h>

int gcd(int num1, int num2){
  if(num1 == 0 || num2 == 0)
    return 0;
  if(num1 == num2)
    return num1;
    
  if(num1>num2)
    return gcd(num1-num2, num2);
  return gcd(num1, num2-num1);
}

int lcm(int num1, int num2){
  return (num1*num2) / gcd(num1, num2);
}

int min(int num1, int num2){
  return num1<num2?num1:num2;
}

int main(void) {
  int arr[50], arr_size;
  printf("Enter the size of the array\n");
  scanf("%d", &arr_size);
  printf("Enter %d elements\n", arr_size);
  for(int i=0; i<arr_size; i++)
    scanf("%d", &arr[i]);
    
  int count = 0;
  for(int i=0; i<arr_size; i++){
    for(int j=i+1; j<arr_size; j++){
      if(lcm(arr[i], arr[j]) > min(arr[i], arr[j]))
      count++;
    }
  }
  
  printf("Result is %d", count);
  return 0;
}
