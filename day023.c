#include <stdio.h>

int main(void) {
  int c;
  char printer[9] = {'$', ' ', '$', ' ', '$', ' ',  '$', ' ', '$'};
  
  for(int i = 0; i<=9; i++){ 
    if(i%2 == 0){
      printer[i] = '*';
      printf("%s\n", printer);
      printer[i] = '$';
    }
  }
  
  return 0;
}
