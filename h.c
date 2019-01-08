#include <stdio.h>

int main(){
  int num;
  for(;;){
    printf("Enter an integer > ");
    scanf("%d", &num);
    if(num >= 0 && num <= 999){
      if(num % 2 == 0){
        printf("Even\n");
      }
      else{
        printf("Odd\n");
      }
    }
    else{
      break;
    }
  }
  printf("Exiting\n");
  return 0;
}
