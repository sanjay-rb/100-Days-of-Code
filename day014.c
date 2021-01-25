#include<stdio.h>
#include<string.h>
int main(void){
  char hello_ary[5] = "hello";
  char *hello_ptr;
  for(hello_ptr=hello_ary; *hello_ptr; hello_ptr++){
    printf("%c\t", hello_ptr[0]);
  }
return 0;
}
