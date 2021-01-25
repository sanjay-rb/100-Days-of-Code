#include<stdio.h>
int main(void){
  //please have your logic here
  //the reason why I haven't include any code here is, 
  //you need to completely revamp your yesterday's 
  //code, because of the consideration of looping
  
  int in_date, in_month, in_year, in_century, in_format, in_add_days, inc_day, in_continue;
  
  printf("Enter the date in DD format\n");
  scanf("%d",&in_date);
  printf("Enter the month in MM format\n");
  scanf("%d",&in_month);
  printf("Enter the year in YY format\n");
  scanf("%d",&in_year);
  
  if(in_date >31 && in_month>12){
      printf("Enter the Correct date");
  }else{
    printf("\nChoose century\n 1.19th\n 2.20th\n 3.21st\n");
    scanf("%d",&in_century);
    switch(in_century){
        case 1:
            in_year=in_year+1800; break;
        case 2:
            in_year=in_year+1900; break;
        case 3:
            in_year=in_year+2000; break;
        default:
            printf("Invalid Year"); break;
    }
    
    printf("Choose the format\n 1.MM-DD-YYYY\n 2.DD-MM-YYYY\n 3.YYYY-MM-DD\n");
    scanf("%d",&in_format);
    switch(in_format){
        case 1:
            printf("The date is %d-%d-%d\n",in_month,in_date,in_year); break;
        case 2:
            printf("The date is %d-%d-%d\n",in_date,in_month,in_year); break;
        case 3:
            printf("The date is %d-%d-%d\n",in_year,in_month,in_date); break;
        default:
            printf("Invalid Choice\n"); break;
    }
    
    do{
      printf("How many days you want to add\n");
      scanf("%d",&in_add_days);
      
      if(in_year%4 == 0 || (in_year%400 == 0 && in_year%100 != 0)){
        int daysPerMonth[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        for(inc_day = 1; inc_day<=in_add_days; inc_day++){
        if(in_date < daysPerMonth[in_month-1]){
          in_date = in_date + 1;
        }else{
          in_date = 1;
          in_month = in_month + 1;
          if(in_month > 12){
            in_month = 1;
            in_year = in_year + 1;
          }
        }
      }
      printf("The date is %d-%d-%d\n",in_date,in_month,in_year);
      }else{
        int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        for(inc_day = 1; inc_day<=in_add_days; inc_day++){
        if(in_date < daysPerMonth[in_month-1]){
          in_date = in_date + 1;
        }else{
          in_date = 1;
          in_month = in_month + 1;
          if(in_month > 12){
            in_month = 1;
            in_year = in_year + 1;
          }
        }
      }
      printf("The date is %d-%d-%d\n",in_date,in_month,in_year);
      }
      printf("Do you want to continue\n1.Yes\n2.No\n");
      scanf("%d", &in_continue);
    }while(in_continue != 2);
  }
  return 0;
}
