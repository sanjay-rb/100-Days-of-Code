#include <stdio.h>


void sumOfDigits(int in_number){
  int sum_dig = 0, num_dig;
  do{
      num_dig = in_number%10;
      sum_dig += num_dig;
      in_number = in_number/10;
    }while(in_number != 0);
  if(sum_dig<10)
    printf("Sum of digits is %d\n", sum_dig);
  else
    sumOfDigits(sum_dig);
}
int main(void) {
  int in_number, string_int_choice, final_num_str = 0;
  char in_string[50];
  
  printf("What do you want to choose\n1.String\n2.Integer\n");
  scanf("%d", &string_int_choice);
  
  if(string_int_choice == 1){
    //str code
    printf("Enter the string\n");
    scanf("%s", in_string);
    for(char *i=in_string; *i; i++){
      int ascii = *i;
      int str_to_num = ascii - 96;
      if(final_num_str == 0){
        final_num_str += str_to_num;
      }else if(str_to_num <10){
        final_num_str *= 10;
        final_num_str += str_to_num;
      }else{
        final_num_str *= 100;
        final_num_str += str_to_num;
      }
    }
    printf("The number equivalent of a given text is\n%d\n", final_num_str);
    sumOfDigits(final_num_str);
  }else if(string_int_choice == 2){
    // int code
    printf("Enter the number\n");
    scanf("%d", &in_number);
    sumOfDigits(in_number);
  }
  return 0;
}
