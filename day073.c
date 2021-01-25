#include <stdio.h>

int isLeapYear(int yyyy){
  return (yyyy%400==0 ||(yyyy%4==0 && yyyy%100!=0));
}

int isValidDate(int dd, int mm, int yyyy){
  if(yyyy>=1900 && yyyy<=9999){
    if(mm>=1 && mm<=12){
        if((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12))
            return 1;
        else if((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11))
            return 1;
        else if((dd>=1 && dd<=28) && (mm==2))
            return 1;
        else if(dd==29 && mm==2 && isLeapYear(yyyy))
            return 1;
        else
            return 0;
    }
    else{
        return 0;
    }
  }
  else{
      return 0;
  }
}


int main(void) {
  int dd, mm, yyyy;
  printf("Enter the date\n");
  scanf("%d-%d-%d", &dd, &mm, &yyyy);
  
  if(isValidDate(dd, mm, yyyy)){
    // Implementation Dependent Methods....
    //https://en.wikipedia.org/wiki/Determination_of_the_day_of_the_week#Implementation-dependent_methods
    int day_code = (dd+=mm<3?yyyy--:yyyy-2,23*mm/9+dd+4+yyyy/4-yyyy/100+yyyy/400)%7;
    char day_array[7][10] = {
       "Sunday", "Monday", "Tuesday", "Wednesday",
      "Thursday", "Friday", "Saturday"
    };
    
    if(day_code == 0 || day_code == 6){
      printf("%s-Weekend", day_array[day_code]);
    }else{
      printf("%s-Weekday", day_array[day_code]);
    }
  }else{
    printf("Entered date is invalid");
  }
  
  return 0;
}
