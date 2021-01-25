#include <stdio.h>

int main(void) {
  int in_number, i, flag = 0;
  printf("Enter a positive integer:\n");
  scanf("%d", &in_number);
 if(in_number == 1){
   printf("1 is neither a prime nor a composite number.");
 }else{
   for(i = 2; i <= in_number/2; i++){
     if(in_number%i == 0){
       flag = 1;
       break;
     }
   }
 }
 
 if(flag == 0){
   printf("%d is a prime number.", in_number);
 }else{
   printf("%d is not a prime number.", in_number);
 }
  return 0;
}
