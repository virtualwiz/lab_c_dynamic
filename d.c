#include <stdio.h>

int main(){
  int a, b, c, d, x;
  printf("Enter values for a, b, c and d to calculate x = (a + b) - (c + d)\n");
  printf("Enter value for a:");
  scanf("%d", &a);
  printf("Enter value for b:");
  scanf("%d", &b);
  printf("Enter value for c:");
  scanf("%d", &c);
  printf("Enter value for d:");
  scanf("%d", &d);
  x = (a + b) - (c + d);
  printf("x is equal to %d\n", x);
  return 0;
}
