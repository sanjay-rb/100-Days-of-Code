#include <stdio.h>

int in_date, in_month, in_year, in_century, in_format;


void printOut(int arg_century){
  switch(in_format){
    case 1:
      printf("The date is %d-%d-%d%d", in_month, in_date, arg_century, in_year); break;
    case 2:
      printf("The date is %d-%d-%d%d", in_date, in_month, arg_century, in_year); break;
    case 3:
      printf("The date is %d%d-%d-%d", arg_century, in_year, in_month, in_date); break;
  }
}
int main(void){
  printf("Enter the date in DD format\n");
  scanf("%d", &in_date);
  printf("Enter the month in MM format\n");
  scanf("%d", &in_month);
  printf("Enter the year in YY format\n");
  scanf("%d", &in_year);
  printf("Choose Century\n1. 19th\n2. 20th\n3. 21st\n");
  scanf("%d", &in_century);
  printf("Choose the format\n1. MM-DD-YYYY\n2. DD-MM-YYYY\n3. YYYY-MM-DD\n");
  scanf("%d", &in_format);
  
  if(in_month == 1 || in_month == 3 || in_month == 5 || in_month == 7 
    || in_month == 8 || in_month == 10 || in_month == 12){
      if(in_date <= 31 ){
          switch(in_century){
            case 1:
              printOut(18); break;
            case 2:
              printOut(19); break;
            case 3:
              printOut(20); break;
          }
      }else{
        printf("Entered Date is invalid");
      }
    }else{
        if(in_date<=30){
          switch(in_century){
            case 1:
              printOut(18); break;
            case 2:
              printOut(19); break;
            case 3:
              printOut(20); break;
          }
        }else{
          printf("Entered Date is invalid");
        }
    }
  return 0;
}
