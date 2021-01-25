#include <stdio.h>

int convertToPalindrome(int singleDigit[], int arr_len){
  int palindrom_int = 0;
  for(int i=0; i<arr_len; i+=2){
    palindrom_int *= 10;
    palindrom_int += singleDigit[i];
  }
  if(arr_len %2 == 0){
    for(int i=arr_len-1; i>=0; i -=2){
      palindrom_int *= 10;
      palindrom_int += singleDigit[i];
    }
  }else{
    for(int i=arr_len-2; i>=0; i -=2){
      palindrom_int *= 10;
      palindrom_int += singleDigit[i];
    }
  }
  return palindrom_int;
}

int reverseInt(int n){
  int reverse = 0;
  while (n != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + n%10;
      n       = n/10;
   }
   
   return reverse;
}

int main(void) {
  int largeInt, singleDigit[50], arr_len=0;
  
  printf("Enter a number\n");
  scanf("%d", &largeInt);
  
  //seperate by array....
  while(largeInt != 0 ){
    singleDigit[arr_len] = largeInt % 10;
    largeInt /= 10;
    arr_len++;
  }
  
  //order the array....
  for(int i=0; i<arr_len; i++){
    for(int j=i+1; j<arr_len; j++){
      if(singleDigit[i] < singleDigit[j]){
        int temp = singleDigit[i];
        singleDigit[i] = singleDigit[j];
        singleDigit[j] = temp;
      }
    }
  }
  
  int final_int = convertToPalindrome(singleDigit, arr_len);
  
  int reverse_int = reverseInt(final_int);
  
  if(final_int == reverse_int){
    printf("The largest palindromic number is %d\n", final_int);
  }else{
    printf("Palindrome cannot be formed\n");
  }
  return 0;
}
