// Menu
#include "Header.h"
#include "Time.h"
#include "Sort.h"

void menu()
{

    int p, m, n;
    int choise, flag = 1;

    printf("Test corctness of all sorts  -  1\n");
    printf("Test time of all sorts -  2\n");
    scanf("%d", &choise);

    switch (choise)
    {

    case 1:

        printf("Enter number of 2D matrixs: \n");
        scanf("%d", &p);

        m = 4;
        n = 4;

        printf("\nDefault array\n");
        input(p, m, n, 2);
        output(p, m, n);
        printf("Sort with first algorithm\n");
        sort_1(p, m, n);
        output(p, m, n);

        printf("\nDefault array\n");
        input(p, m, n, 2);
        output(p, m, n);
        printf("Sort with second algorithm\n");
        sort_2(p, m, n);
        output(p, m, n);

        printf("\nDefault array\n");
        input(p, m, n, 2);
        output(p, m, n);
        printf("Sort with third algorithm 1\n");
        sort_3(p, m, n);
        output(p, m, n);

        break;

    case 2:

        printf("Start time test of \n");
        printf("1 - all algorithms\n");
        printf("2 - one algorithm\n");
        scanf("%d", &choise);

        switch (choise)
        {
            int mode_arr, mode_sort;

        case 1:

            printf("\nEnter P\n");
            scanf("%d", &p);
            printf("\nEnter M\n");
            scanf("%d", &m);
            printf("\nEnter N\n");
            scanf("%d", &n);

            printf("\n______________________________________________________________________________________________________________\n");
            printf("                                         |Sorted   | |Random | |Reverse-Sorted| \n");
            printf("Sort 1 |    Selection sort №6          | |%10.0f   | |%10.0f | |%10.0f        |\n", (double)time_sort_1(p, m, n, 1), (double)time_sort_1(p, m, n, 2), (double)time_sort_1(p, m, n, 3));
            printf("________________________________________________________________________________________________________________\n");
            printf("Sort 2 |    Bubble sort (exchange)     | |%10.0f   | |%10.0f | |%10.0f        |\n", (double)time_sort_2(p, m, n, 1), (double)time_sort_2(p, m, n, 2), (double)time_sort_2(p, m, n, 3));
            printf("________________________________________________________________________________________________________________\n");
            printf("Sort 3 |Hybrid (Selection 4 - Exchange)| |%10.0f   | |%10.0f | |%10.0f        |\n", (double)time_sort_3(p, m, n, 1), (double)time_sort_3(p, m, n, 2), (double)time_sort_3(p, m, n, 3));

            break;

        case 2:

            printf("    SOrt - \n    1 - Sorted\n    2 - Random\n    3 -  Reverse-Sorted\n");
            scanf("%d", &mode_arr);
            printf("Метод сортування\n");
            printf("1 - Selection\n");
            printf("2 - Bubble (exchange)\n");
            printf("3 - Hybrid (Selection 4 - Exchange)\n");
            scanf("%d", &mode_sort);

            switch (mode_sort)
            {
            case 1:
                printf("Enter array`s sizes\n");
                printf("P = \n");
                scanf("%d", &p);
                printf("M = \n");
                scanf("%d", &m);
                printf("N = \n");
                scanf("%d", &n);
                printf("Sort time = %f", (double)time_sort_1(p, m, n, mode_arr));

                break;

            case 2:
                printf("Enter array`s sizes\n");
                printf("P = \n");
                scanf("%d", &p);
                printf("M = \n");
                scanf("%d", &m);
                printf("N = \n");
                scanf("%d", &n);
                printf("Sort time = %f", (double)time_sort_2(p, m, n, mode_arr));

                break;

            case 3:
                printf("Enter array`s sizes\n");
                printf("P = \n");
                scanf("%d", &p);
                printf("M = \n");
                scanf("%d", &m);
                printf("N = \n");
                scanf("%d", &n);
                printf("Sort time = %f", (double)time_sort_3(p, m, n, mode_arr));

                break;

            case 0:
                break;

            default:

                menu();

                break;
            }
        }
    }
    printf("\nMenu?\n 1 - Yes\n2 - Exit \n");
    scanf("%d", &flag);

    while (flag == 1)
    {
        system("cls");
        menu();
        printf("\n\nMenu?\n 1 - Yes\n2 - Exit \n");
        scanf("%d", &flag);
    }
}
