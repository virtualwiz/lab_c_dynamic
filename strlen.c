#include <stdio.h>
#include <string.h>

void main(){
  int i;
  char name[]="John Smith";

  for(i=strlen(name);i>=0;i--){
    printf("%c",name[i]);
  }

  printf("\n");
}
