#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH_THRESHOLD 9
#define FILEMANE "sample.txt"

int main(){
  FILE* file_ptr;
  unsigned int size;
  char read_buf;
  char word_buf[64];

  file_ptr = fopen(FILEMANE, "r");

  fseek(file_ptr, 0, SEEK_END);
  size = ftell(file_ptr);
  fseek(file_ptr, 0, SEEK_SET);

  char* file_buf = (char*)malloc(size * sizeof(char));

  file_buf[0] = '\0';

  while((read_buf = getc(file_ptr)) != EOF){
    if(read_buf != ' '){
      printf("%c",read_buf);
      }
    else{

    }
  }

  fclose(file_ptr);
  return 0;
}
