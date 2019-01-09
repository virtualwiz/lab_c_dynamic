#include <stdio.h>

struct complex{
  double re;
  double im;
};

struct complex sum(struct complex* z, int N){
  struct complex z_sum;
  int i;

  for(i = 0; i < N; i++){
    z_sum.re += z[i].re;
    z_sum.im += z[i].im;
  }

  return z_sum;
}

int main(){
  struct complex n[2];
  struct complex s;
  n[0].re = 1;
  n[0].im = 2;
  n[1].re = 3;
  n[1].im = 4;

  s = sum(&n[0], 2);
  printf("%lf+j%lf\n", s.re, s.im);
  return 0;
}

