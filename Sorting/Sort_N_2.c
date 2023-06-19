#include "./../Include/Sort.h"
#include <stdlib.h>
#include <time.h>

clock_t sort_2(int const P, int const M, int const N) {

  int buf;
  clock_t time_start, time_stop;
  time_start = clock();
  for (int p = 0; p < P; p++) {
    for (int R_n = N - 1; R_n >= 0; R_n--) {
      for (int R_m = M - 1; R_m >= 0; R_m--) {
        for (int n = 0; n <= R_n; n++) {
          for (int m = 0; (n == R_n) ? (m < R_m) : (m < M - 1); m++) {
            if (A[p][m][n] > A[p][m + 1][n]) {
              buf = A[p][m][n];
              A[p][m][n] = A[p][m + 1][n];
              A[p][m + 1][n] = buf;
            }
          }
          if (A[p][M - 1][n] > A[p][0][n + 1] && n != N - 1) {
            buf = A[p][M - 1][n];
            A[p][M - 1][n] = A[p][0][n + 1];
            A[p][0][n + 1] = buf;
          }
        }
      }
    }
  }
  time_stop = clock();
  return time_stop - time_start;
}
