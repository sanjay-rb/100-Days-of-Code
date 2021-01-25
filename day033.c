#include <stdio.h>
#include <stdlib.h>

int op_array[50], op_array_size;

void insertValue();
void deleteValue();
void displayValue();
int searchValue(int search_me_element);

int main(void) {
  int op_option;
  while(1){
    printf("What do you want to do\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
    scanf("%d", &op_option);
    
    switch(op_option){
      case 1: insertValue(); break;
      case 2: deleteValue(); break;
      case 3: displayValue(); break;
      case 4: exit(0); break;
      default: printf("Enter Correct Option\n"); break;
    }
  }
  return 0;
}

void insertValue(){
  printf("Enter the size of the array\n");
  scanf("%d", &op_array_size);
  printf("Input %d integer numbers\n", op_array_size);
  for(int i=0; i<op_array_size; i++){
    scanf("%d", &op_array[i]);
  }
}

void deleteValue(){
  int delete_me_element, delete_me_index, temp;
  printf("Which element you want to delete from the given array\n");
  scanf("%d", &delete_me_element);
  if(searchValue(delete_me_element)){
    printf("Which index you’re targeting?\n");
    scanf("%d", &delete_me_index);
    for(int i=delete_me_index; i<op_array_size+1; i++){
      op_array[i] = op_array[i+1];
    }
    op_array_size--;
    printf("The element %d at the index %d removed successfully\n", delete_me_element, delete_me_index);
  }else{
    printf("The element %d was not found in the given array\n", delete_me_element);
  }
}

void displayValue(){
  for(int i=0; i<op_array_size; i++){
    printf("%d\n", op_array[i]);
  }
}

int searchValue(int search_me_element){
  int return_flag = 0;
  for(int i=0; i<op_array_size; i++){
    if(op_array[i] == search_me_element){
      return_flag = 1;
    }
  }
  if(return_flag){
    printf("The element %d found in the following positions\n", search_me_element);
    for(int i=0; i<op_array_size; i++){
      if(op_array[i] == search_me_element){
        printf("%d\n", i);
      }
    }
  }
  return return_flag;
}
