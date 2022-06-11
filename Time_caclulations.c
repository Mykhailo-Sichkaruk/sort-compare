#include "Time_caclulations.h"

void res_calculations(int num_of_res, long int Res[num_of_res])
{

	long int sum, Min_1, Min_2, Min_3, Max_1, Max_2, Max_3;
	int imin_1, imin_2, imin_3, imax_1, imax_2, imax_3;

	sum = Res[2];
	Min_1 = Res[2];
	Max_1 = Res[2];
	imin_1 = 2;
	imax_1 = 2;

	for (int i = 3; i < num_of_res; i++)
	{
		sum = sum + Res[i];
		if (Res[i] > Max_1)
		{
			Max_1 = Res[i];
			imax_1 = i;
		}
		else if (Res[i] < Min_1)
		{
			Min_1 = Res[i];
			imin_1 = i;
		}
	}

	Res[imin_1] = -1;
	Res[imax_1] = -1;

	if (Res[2] == -1)
	{
		Min_2 = Res[3];
		imin_2 = 3;
	}
	else
	{
		Min_2 = Res[2];
		imin_2 = 2;
		Max_2 = Res[2];
		imax_2 = 2;
	}
	for (int i = 3; i < num_of_res; i++)
	{
		if (Res[i] > Max_2)
		{
			Max_2 = Res[i];
			imax_2 = i;
		}
	}
	Res[imin_2] = -1;
	Res[imax_2] = -1;

	if (Res[3] == -1)
	{
		Min_3 = Res[4];
		imin_3 = 4;
	}
	else
	{
		Min_3 = Res[2];
		imin_3 = 3;
	}
	Max_3 = Res[2];
	imax_3 = 2;
	for (int i = 3; i < num_of_res; i++)
	{
		if (Res[i] > Max_3)
		{
			Max_3 = Res[i];
			imax_3 = i;
		}
		else if (Res[i] < Min_3 && Res[i] != -1)
		{
			Min_3 = Res[i];
			imin_3 = i;
		}
	}

	Res[0] = sum - Min_1 - Min_2 - Min_3 - Max_1 - Max_2 - Max_3;
}
