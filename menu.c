//˜˜˜˜
#include "Header.h"
#include "Time.h"
#include "Sort.h"


void menu()
{

int p, m, n;
int choise, flag = 1;

printf("˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜ ˜˜˜ ˜˜˜˜˜˜˜˜˜  -  1\n");
printf("˜˜˜˜˜˜˜˜˜˜ ˜˜˜˜ ˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜ -  2\n");
scanf("%d", &choise);

switch(choise)
{

   case 1:

   	printf("˜˜˜˜˜˜ ˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜\n");
   	scanf("%d", &p);

	m = 4;
	n = 4;

	printf("\n˜˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜\n");
	input(p, m, n, 2);
	output(p, m, n);
	printf("˜˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜˜ 1\n");
	sort_1(p, m, n);
	output(p, m, n);


	printf("\n˜˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜\n");
	input(p, m, n, 2);
	output(p, m, n);
	printf("˜˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜˜ 2\n");
	sort_2(p, m, n);
	output(p, m, n);


	printf("\n˜˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜\n");
	input(p, m, n, 2);
	output(p, m, n);
	printf("˜˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜˜ 3\n");
	sort_3(p, m, n);
	output(p, m, n);

	break;


	case 2:

	printf("˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜˜ ˜˜˜˜ ˜˜˜ ˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜˜\n");
	printf("1 - ˜˜\n");
	printf("2 - ˜˜˜˜\n");
	scanf("%d", &choise);

	switch(choise)
	{
	    int mode_arr, mode_sort;

	    case 1:

	    printf("\n˜˜˜˜˜˜ P\n");
	    scanf("%d", &p);
	    printf("\n˜˜˜˜˜˜ M\n");
	    scanf("%d", &m);
	    printf("\n˜˜˜˜˜˜ N\n");
	    scanf("%d", &n);

		printf("\n______________________________________________________________________________________________________________\n");
		printf("                                  |˜˜˜˜˜˜˜˜˜˜˜˜˜| |˜˜˜˜˜˜˜˜˜˜| |˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜˜˜˜˜| \n");
		printf("˜˜˜˜ 1 |    ˜˜˜˜˜˜ ˜˜˜˜ 6      | |%10.0f   | |%10.0f | |%10.0f        |\n", (double)time_sort_1(p, m, n, 1), (double)time_sort_1(p, m, n, 2), (double)time_sort_1(p, m, n, 3));
		printf("________________________________________________________________________________________________________________\n");
		printf("˜˜˜˜ 2 |    ˜˜˜˜˜˜ ˜˜˜˜ 1      | |%10.0f   | |%10.0f | |%10.0f        |\n", (double)time_sort_2(p, m, n, 1), (double)time_sort_2(p, m, n, 2), (double)time_sort_2(p, m, n, 3));
		printf("________________________________________________________________________________________________________________\n");
		printf("˜˜˜˜ 3 |?˜˜˜˜ (˜˜˜˜ 4 - ˜˜˜˜)| |%10.0f   | |%10.0f | |%10.0f        |\n", (double)time_sort_3(p, m, n, 1), (double)time_sort_3(p, m, n, 2), (double)time_sort_3(p, m, n, 3));

		break;


        case 2:


        printf("    ˜˜˜˜˜˜˜˜˜ - \n    1 - ˜˜˜˜˜˜˜˜˜˜˜˜˜\n    2 - ˜˜˜˜˜˜˜˜˜˜\n    3 -  ˜˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜˜˜˜˜\n");
        scanf("%d", &mode_arr);
        printf("˜˜˜˜˜ ˜˜˜˜˜˜˜˜˜˜\n");
        printf("1 - ˜˜˜˜˜˜ ˜˜˜˜ (6)\n");
        printf("2 - ˜˜˜˜˜˜ ˜˜˜˜ (6)\n");
        printf("3 - ˜˜˜˜ (4) - ˜˜˜˜ (6)\n");
        scanf("%d", &mode_sort);

        switch(mode_sort)
        {
            case 1:
            printf("˜˜˜˜˜˜ ˜˜˜˜˜˜ ˜˜˜˜˜˜\n");
            printf("P = \n");
            scanf("%d", &p);
            printf("M = \n");
            scanf("%d", &m);
            printf("N = \n");
            scanf("%d", &n);
            printf("˜˜˜ ˜˜˜˜˜˜˜˜˜˜ = %f", (double)time_sort_1(p, m, n, mode_arr));

            break;


            case 2:
            printf("˜˜˜˜˜˜˜ ˜˜˜˜˜˜ ˜˜˜˜˜˜\n");
            printf("P = \n");
            scanf("%d", &p);
            printf("M = \n");
            scanf("%d", &m);
            printf("N = \n");
            scanf("%d", &n);
            printf("˜˜˜ ˜˜˜˜˜˜˜˜˜˜ = %f", (double)time_sort_2(p, m, n, mode_arr));

            break;


            case 3:
            printf("˜˜˜˜˜˜˜ ˜˜˜˜˜˜ ˜˜˜˜˜˜\n");
            printf("P = \n");
            scanf("%d", &p);
            printf("M = \n");
            scanf("%d", &m);
            printf("N = \n");
            scanf("%d", &n);
            printf("˜˜˜ ˜˜˜˜˜˜˜˜˜˜ = %f", (double)time_sort_3(p, m, n, mode_arr));

            break;


            case 0:
            break;


            default:

            menu();

            break;
        }

	}



}
printf("\n˜˜˜˜?\n 1 - ˜˜˜\n2 - ˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜ \n");
scanf("%d", &flag);

while(flag == 1)
{
system("cls");
menu();
printf("\n\n˜˜˜˜?\n 1 - ˜˜˜\n2 - ˜˜˜˜˜˜˜ ˜˜˜˜˜˜˜˜ \n");
scanf("%d", &flag);

}


}
