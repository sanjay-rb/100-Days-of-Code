#include <stdio.h>

int main(void) {
  int year;
  printf("Enter the year data to check\n");
  scanf("%d", &year);
  if(((year % 4 == 0) && (year %100 != 0)) || (year % 400 == 0)){
    printf("Yeah, the entered year is leap year");
  }else{
    printf("No, the entered year is not a leap year");
  }
  
  return 0;
}
