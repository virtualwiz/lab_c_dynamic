#include <stdio.h>
#include <math.h>

typedef struct{
  double i;
  char is_valid;
} Result_TypeDef;

Result_TypeDef pr2i(double p, double r){
  Result_TypeDef Result_Structure;
  if(!(p < 0 || r < 0) && r != 0){
    Result_Structure.i = sqrt(p / r);
    Result_Structure.is_valid = 1;
  }
  else{
    Result_Structure.i = 0;
    Result_Structure.is_valid = 0;
  }
  return Result_Structure;
}

int main(){
  Result_TypeDef Result_Structure;
  double p, r;
  printf("Enter the value of P: ");
  scanf("%lf", &p);
  printf("Enter the value of R: ");
  scanf("%lf", &r);
  Result_Structure = pr2i(p, r);
  if(Result_Structure.is_valid == 1){
    printf("The value of I is %lf\n", Result_Structure.i);
  }
  else{
    printf("Entered values can't be processed\n");
  }
  return 0;
}
