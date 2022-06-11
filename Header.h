// �� �������� �� �������
#pragma once
#include <stdio.h>
#include <windows.h>
#include <time.h>

#define pmax 100
#define mmax 100
#define nmax 100

extern int A[pmax][mmax][nmax];

void output(int const p, int const m, int const n);

void input(int const p, int const m, int const n, int const mode);

void menu();
