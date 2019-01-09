#include <stdio.h>

void main(){
  FILE* file_ref;

  int a2d [3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 7, 5, 3}
  };

  int* array_ref = &a2d[0][0];
  int offset;

  file_ref = fopen("mem_dump.txt", "w");

  for(offset = -20; offset < 20; offset++){
    int content = *(array_ref + offset);
    printf("%d\n", content);
    fprintf(file_ref, "%d\n", content);
  }

  fclose(file_ref);
}
