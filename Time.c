#define _CRT_NO_WARNINGS_

#include "Time.h"
#include <time.h>
#include "Time_caclulations.h"

clock_t time_sort_1(int const p, int const m, int const n, int const mode)
{

    int num_of_res = 28;

    clock_t Res[num_of_res];

    for (int i = 0; i < num_of_res; i++)
    {

        input(p, m, n, mode);
        Res[i] = sort_1(p, m, n);
    }

    res_calculations(num_of_res, Res);
    return Res[0];
}

clock_t time_sort_2(int const p, int const m, int const n, int const mode)
{

    int num_of_res = 28;

    clock_t Res[num_of_res];

    for (int i = 0; i < num_of_res; i++)
    {

        input(p, m, n, mode);
        Res[i] = sort_2(p, m, n);
    }

    res_calculations(num_of_res, Res);
    return Res[0];
}

clock_t time_sort_3(int const p, int const m, int const n, int const mode)
{

    int num_of_res = 28;

    clock_t Res[num_of_res];

    for (int i = 0; i < num_of_res; i++)
    {

        input(p, m, n, mode);
        Res[i] = sort_3(p, m, n);
    }

    res_calculations(num_of_res, Res);
    return Res[0];
}
