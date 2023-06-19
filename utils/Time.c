#include "./../Include/Time.h"
#include "Time_caclulations.h"
#include <time.h>

#define NUM_OF_RES 28

clock_t time_sort(int const p, int const m, int const n, int const mode,
                  clock_t (*sort_func)(int, int, int)) {
  clock_t Res[NUM_OF_RES];

  for (int i = 0; i < NUM_OF_RES; i++) {
    input(p, m, n, mode);
    Res[i] = sort_func(p, m, n);
  }

  res_calculations(NUM_OF_RES, Res);
  return Res[0];
}

clock_t time_sort_1(int const p, int const m, int const n, int const mode) {
  return time_sort(p, m, n, mode, sort_1);
}

clock_t time_sort_2(int const p, int const m, int const n, int const mode) {
  return time_sort(p, m, n, mode, sort_2);
}

clock_t time_sort_3(int const p, int const m, int const n, int const mode) {
  return time_sort(p, m, n, mode, sort_3);
}
