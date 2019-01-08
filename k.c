#include <stdio.h>

#define LENGTH_THRESHOLD 9
#define FILEMANE "sample.txt"

int main(){
  FILE* file_ptr;
  file_ptr = fopen(FILEMANE, "r");

  

  fclose(file_ptr);
  return 0;
}
