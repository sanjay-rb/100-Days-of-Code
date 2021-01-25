#include <stdio.h>

int main(void) {
  char hash_array[9] = {'#', ' ', '#', ' ', '#', ' ', '#', ' ', '#'};
  for(int i = 0 ; i<9; i = i + 2){
    if(i == 4){
      hash_array[i] = '0';
      printf("%s\n", hash_array);
      hash_array[i] = '#';
    }else{
      printf("%s\n", hash_array);
    }
      
  }
  
  return 0;
}
