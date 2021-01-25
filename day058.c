#include <stdio.h>
#include <string.h>

int main(void) {
  char palindrom[50];
  printf("Enter the string\n");
  scanf("%s", palindrom);
  
  if(strlen(palindrom)%2 == 0){
    for(int i=0; i<strlen(palindrom)/2; i++){
      printf("%c%c", palindrom[i], palindrom[strlen(palindrom) - (i+1)]);
    }
  }else{
    printf("-1");
  }
  
  return 0;
}
