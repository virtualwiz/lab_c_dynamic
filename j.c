#include <stdio.h>
#include <stdlib.h>

#define END_OF_LIST -999

int main(){
  int num_of_nums = 0;
  int addr;
  int sum = 0;
  double product = 1;
  double input_buffer;
  double* mem_ptr = (double*)malloc(num_of_nums * sizeof(double));
  printf("Enter numbers in the list, press enter before entering another number\n");
  for(;;){
    scanf("%lf", &input_buffer);
    if(input_buffer == END_OF_LIST){
      break;
    }
    num_of_nums += 1;
    mem_ptr = (double*)realloc(mem_ptr, num_of_nums * sizeof(double));
    mem_ptr[num_of_nums - 1] = input_buffer;
  }

  printf("List memory:\n");
  for(addr = 0; addr < num_of_nums; addr++){
    printf("%lf\t", mem_ptr[addr]);
    if(mem_ptr[addr] - (int)mem_ptr[addr] == 0){
      sum += mem_ptr[addr];
    }
    else{
      product *= mem_ptr[addr];
    }
  }
  printf("\n");
  printf("Sum of integers is :\t%d\n", sum);
  printf("Product of float numbers is :\t%lf\n", product);
  free(mem_ptr);
  return 0;
}
