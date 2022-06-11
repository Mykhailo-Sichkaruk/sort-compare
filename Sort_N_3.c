#include "Sort.h"

clock_t sort_3(int const P, int const M, int const N)
{
	int Min, Max;
	int L_i, L_j, R_i, R_j;
	clock_t time_start, time_stop;
	time_start = clock();

	for (int k = 0; k < P; k++)
	{
		L_i = 0;
		L_j = 0, R_i = (M - 1), R_j = (N - 1);

		while ((N % 2) ? (!((L_j == R_j) && (L_i >= R_i))) : ((L_j <= R_j)))
		{
			for (int j = L_j; j <= R_j; j++)
			{
				for (int i = (L_j == j) ? (L_i) : (0); (j == R_j) ? (i < (R_i)) : (i < M); i++)
				{
					if (A[k][i][j] < A[k][L_i][L_j])
					{
						Min = A[k][i][j];
						A[k][i][j] = A[k][L_i][L_j];
						A[k][L_i][L_j] = Min;
					}

					else if (A[k][i][j] > A[k][R_i][R_j])
					{
						Max = A[k][i][j];
						A[k][i][j] = A[k][R_i][R_j];
						A[k][R_i][R_j] = Max;
					}
				}
			}

			if ((L_i + 1) < M)
			{
				L_i++;
				R_i--;
			}
			else
			{
				L_j++;
				L_i = 0;
				R_j--;
				R_i = M - 1;
			}
		}
	}
	time_stop = clock();
	return time_stop - time_start;
}
