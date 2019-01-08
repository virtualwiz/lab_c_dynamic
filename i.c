#include <stdio.h>

double f2c(double f){
  return (5.0 / 9.0) * (f - 32.0);
}

double c2f(double c){
  return (9.0 / 5.0) * c + 32;
}

int main(){
  double input_data;
  char mode;
  printf("Fahrenheit to Celsius temperature reading converting program\n");
  printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
  printf("Please choose an input unit (c/f)? > ");
  scanf("%c",&mode);
  printf("Please enter your reading > ");
  scanf("%lf", &input_data);
  printf("Thank you,\n");
  if(mode == 'f'){
    printf("The temperature of your reading %lf is %lf\n", input_data, f2c(input_data));
  }
  else if(mode == 'c'){
    printf("The temperature of your reading %lf is %lf\n", input_data, c2f(input_data));
  }
  else{
    printf("Unimplemented mode, exiting\n");
  }
  return 0;
}
