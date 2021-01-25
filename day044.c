#include <stdio.h>
#include <string.h>
int position(char);
char s[30];
int main(void) {
  char c;
  printf("Enter the String\n");
  scanf("%s",s);
  printf("Enter the character you want to search\n");
  scanf(" %c", &c);
  printf("%d", position(c));
  return 0;
}
int position(char c){
  //write your logic here
  for(int i=0; i<strlen(s); i++){
    if(s[i] == c)
      return i;
  }
  return -1;
}
