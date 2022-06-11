#include "Sort.h"
clock_t 	sort_1	(int const P, int const M, int const N)
{

 int min_n, min_m, buf;

 clock_t time_start, time_stop;
 time_start = clock();
 for(int p = 0; p < P; p++)
 {
 		 for(int n = 0; n < N; n++)
		 {
		 	 for(int m = 0; m < M; m++)
		  	 {

				 min_m = m;
			  	 min_n = n;

			  	 for(int new_min_n = n; new_min_n < N; new_min_n++)
			  	 {

				  	 for(int new_min_m = (new_min_n == n)?(m):(0); new_min_m < M; new_min_m++)
					 {

						 if (A[p][new_min_m][new_min_n] < A[p][min_m][min_n])
						 {
						  	 min_n = new_min_n;
				   			 min_m = new_min_m;
						 }

					 }



				 }

	 		   			 	 buf = A[p][min_m][min_n];
						 	 A[p][min_m][min_n] = A[p][m][n];
				 	 		 A[p][m][n] = buf;


			 }

	 	}
}
 time_stop = clock();
 return time_stop - time_start;
}
