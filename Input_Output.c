#include "./Include/Header.h"
#include <stdlib.h>

void input(int p, int m, int n, int mode) {
  int q = 0;
  switch (mode) {
  case 1:
    for (int i = 0; i < p; i++) {
      for (int j = 0; j < m; j++) {
        for (int k = 0; k < n; k++) {
          A[i][j][k] = q++;
        }
      }
    }
    break;

  case 2:
    for (int i = 0; i < p; i++) {
      for (int j = 0; j < m; j++) {
        for (int k = 0; k < n; k++) {
          A[i][j][k] = rand() % (2 * p * m * n) - p * m * n;
        }
      }
    }
    break;

  case 3:
    q = p * m * n;
    for (int i = 0; i < p; i++) {
      for (int j = 0; j < m; j++) {
        for (int k = 0; k < n; k++) {
          A[i][j][k] = q--;
        }
      }
    }
    break;
  }
}

void output(int p, int m, int n) {
  for (int i = 0; i < p; i++) {
    for (int j = 0; j < m; j++) {
      for (int k = 0; k < n; k++) {
        printf("\t%d ", A[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
    printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
           "\n");
  }
}
