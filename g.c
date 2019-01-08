#include <stdio.h>

double f2c(double f){
  return (5.0 / 9.0) * (f - 32.0);
}

int main(){
  double f;
  printf("Fahrenheit to Celsius temperature reading converting program\n");
  printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
  printf("Please enter your reading in degrees F > ");
  scanf("%lf", &f);
  printf("Thank you,\n");
  printf("The temperature of your reading %lf is %lf\n", f, f2c(f));
  return 0;
}
