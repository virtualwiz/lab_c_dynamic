#include <stdio.h>

void swap(int* numA, int* numB){
  int tmp;
  tmp = *numB;
  *numB = *numA;
  *numA = tmp;
}

void main(){
  int a = 0;
  int b = 1;
  printf("%d\t%d\n", a, b);
  swap(&a, &b);
  printf("%d\t%d\n", a, b);
}
