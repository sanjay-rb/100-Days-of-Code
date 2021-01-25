#include<stdio.h>
#include<stdlib.h>

int main(void)
{	
  int in_date, in_month, in_year;
  printf("Input the Date\nDate\n");
  scanf("%d", &in_date);
  printf("Month\n");
  scanf("%d", &in_month);
  printf("Year\n");
  scanf("%d", &in_year);
  
  if(
    in_month == 1 || in_month == 3 || in_month == 5 || in_month == 7 
    || in_month == 8 || in_month == 10 || in_month == 12){
      if(in_date <= 31 ){
          printf("The entered date is %d-%d-%d", in_month, in_date, in_year);
      }else{
        printf("Entered Date is invalid");
    }
  }else{
    if(in_date<=30){
        printf("The entered date is %d-%d-%d", in_month, in_date, in_year);
    }else{
        printf("Entered Date is invalid");
    }
  }
      return 0;
}
