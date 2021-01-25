#include<stdio.h>
#include<stdlib.h>
int main(){
  int *memory_pointer, number_of_var, i;
  printf("Enter the number of variables to be allocated\n");
  scanf("%d", &number_of_var);
  memory_pointer = malloc(number_of_var * sizeof(int));
  printf("%lu bytes of memory allocated successfully\n", number_of_var * sizeof(int));
  printf("Base Address is %p\n", memory_pointer);
  for(i = 1; i<=number_of_var; i++, memory_pointer++){
    *memory_pointer = i;
    printf("The address of %d is %p and its value is %d\n", i, memory_pointer, *memory_pointer);
  }
return 0;
}
