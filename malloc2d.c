#include <stdio.h>
#include <stdlib.h>

int main(){
  int num_r = 4;
  int num_c = 4;
  int i, inder, indec;

  char** mat_ref = (char**)malloc(num_c * sizeof(char));
  for(i = 0; i < num_c; i++){
    mat_ref[i] = (char*)malloc(num_r * sizeof(char));
  }

  for(inder = 0; inder < num_r; inder++){
    for(indec = 0; indec < num_c; indec++){
      mat_ref[inder][indec] = '*';
    }
  }

  for(i = -30; i <= num_r * num_c + 30; i++){
    printf("%c ", *(&mat_ref[0][0] + i));
  }

  printf("\n");

  return 0;
}
