#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int row;
  int col;
}Index_TypeDef;

int Get_Index(int size_c, int index_r, int index_c){
  return index_r * size_c + index_c;
}

int main(){
  int size_matA_rows, size_matAB_cols_rows, size_matB_cols;
  int cell = 0;

  Index_TypeDef matA_Index;
  Index_TypeDef matB_Index;

  printf("matA.rows > ");
  scanf("%d",&size_matA_rows);
  printf("matA.cols, matB.rows > ");
  scanf("%d",&size_matAB_cols_rows);
  printf("matB.cols > ");
  scanf("%d",&size_matB_cols);

  double* matA = (double*)malloc(size_matA_rows * size_matAB_cols_rows * sizeof(double));
  double* matB = (double*)malloc(size_matB_cols * size_matAB_cols_rows * sizeof(double));
  double* matC = (double*)malloc(size_matA_rows * size_matB_cols * sizeof(double));


  for(matA_Index.row = 0; matA_Index.row < size_matA_rows; matA_Index.row++){
    for(matA_Index.col = 0; matA_Index.col < size_matAB_cols_rows; matA_Index.col++){
      printf("matA r=%d, c=%d > ", matA_Index.row, matA_Index.col);
      scanf("%lf",&matA[Get_Index(size_matAB_cols_rows, matA_Index.row, matA_Index.col)]);
    }
  }

  for(matB_Index.row = 0; matB_Index.row < size_matAB_cols_rows; matB_Index.row++){
    for(matB_Index.col = 0; matB_Index.col < size_matB_cols; matB_Index.col++){
      printf("matB r=%d, c=%d > ", matB_Index.row, matB_Index.col);
      scanf("%lf",&matA[Get_Index(size_matB_cols, matB_Index.row, matB_Index.col)]);
    }
  }

  for(matB_Index.col = 0; matB_Index.col < size_matB_cols; matB_Index.col++){
    for(matA_Index.row = 0; matA_Index.row < size_matA_rows; matA_Index.row++){
      // Compute value for each cell
      for(matA_Index.col = 0; matA_Index.col < size_matAB_cols_rows; matA_Index.col++){
        cell += matA[Get_Index(size_matAB_cols_rows, matA_Index.row, matA_Index.col)]
          * matB[Get_Index(size_matB_cols, matA_Index.col, matA_Index.row)];
      }
      matC[Get_Index(size_matB_cols, matA_Index.row, matB_Index.col)] = cell;
    }
  }


  for(matA_Index.row = 0; matA_Index.row < size_matA_rows; matA_Index.row++){
    for(matB_Index.col = 0; matB_Index.col < size_matB_cols; matB_Index.col++){
      printf("%lf\t", matC[Get_Index(size_matB_cols, matA_Index.row, matB_Index.col)]);
    }
    printf("\n");
  }

  free(matA);
  free(matB);
  free(matC);

  return 0;

}
