#include <stdio.h>
#include <stdlib.h>

int **MatrizDelimitadoraMinima(int **M, int m, int n,
                               int *mm, int *nn){
  int **A;
  int xmin,xmax,ymin,ymax;
  int i,j;
  int AlocaMatriz;

  xmin = n;
  xmax = 0;
  ymin = m;
  ymax = 0;
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      if(M[i][j] == 0) continue;
      if(j < xmin) xmin = j;
      if(i < ymin) ymin = i;
      if(j > xmax) xmax = j;
      if(i > ymax) ymax = i;
    }
  }
  *mm = ymax - ymin + 1;
  *nn = xmax - xmin + 1;
  A = AlocaMatriz(*mm, *nn);
  for(i = ymin; i <= ymax; i++){
    for(j = xmin; j <= xmax; j++){
      A[i-ymin][j-xmin] = M[i][j];
    }
  }
  return A;
  }

  void ImprimeMatriz(int **M, int m, int n){
  int i,j;
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      printf(" %2d ",M[i][j]);
    }
    printf("\n");
  }
}

int main(){
  int **A;
  int **B;
  int mB,nB,mA,nA;

  A = LeMatriz("matrizA.txt", &mA, &nA);
  ImprimeMatriz(A, mA, nA);
  printf("\n");

  B = MatrizDelimitadoraMinima(A, mA, nA, &mB, &nB);

  ImprimeMatriz(B, mB, nB);
  printf("\n");

  LiberaMatriz(A, mA);
  LiberaMatriz(B, mB);

  return 0;
}
