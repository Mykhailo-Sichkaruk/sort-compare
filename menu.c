//меню
#include "Header.h"
#include "Time.h"
#include "Sort.h"


void menu()
{

int p, m, n;
int choise, flag = 1;

printf("Перевірка роботи всіх алгоритмів  -  1\n");
printf("Тестування часу роботи алгоритмів -  2\n");
scanf("%d", &choise);

switch(choise)
{

   case 1:

   	printf("Введіть кількість перерізів\n");
   	scanf("%d", &p);

	m = 4;
	n = 4;

	printf("\nПочатковий масив\n");
	input(p, m, n, 2);
	output(p, m, n);
	printf("Сортування алгоритмом 1\n");
	sort_1(p, m, n);
	output(p, m, n);


	printf("\nПочатковий масив\n");
	input(p, m, n, 2);
	output(p, m, n);
	printf("Сортування алгоритмом 2\n");
	sort_2(p, m, n);
	output(p, m, n);


	printf("\nПочатковий масив\n");
	input(p, m, n, 2);
	output(p, m, n);
	printf("Сортування алгоритмом 3\n");
	sort_3(p, m, n);
	output(p, m, n);

	break;


	case 2:

	printf("Запуск тестування часу всіх алгоритмів сортування\n");
	printf("1 - Всі\n");
	printf("2 - Один\n");
	scanf("%d", &choise);

	switch(choise)
	{
	    int mode_arr, mode_sort;

	    case 1:

	    printf("\nВведіть P\n");
	    scanf("%d", &p);
	    printf("\nВведіть M\n");
	    scanf("%d", &m);
	    printf("\nВведіть N\n");
	    scanf("%d", &n);

		printf("\n______________________________________________________________________________________________________________\n");
		printf("                                  |Впорядкований| |Випадковий| |Обернено впорядкований| \n");
		printf("Сорт 1 |    Прямий вибір 6      | |%10.0f   | |%10.0f | |%10.0f        |\n", (double)time_sort_1(p, m, n, 1), (double)time_sort_1(p, m, n, 2), (double)time_sort_1(p, m, n, 3));
		printf("________________________________________________________________________________________________________________\n");
		printf("Сорт 2 |    Прямий обмін 1      | |%10.0f   | |%10.0f | |%10.0f        |\n", (double)time_sort_2(p, m, n, 1), (double)time_sort_2(p, m, n, 2), (double)time_sort_2(p, m, n, 3));
		printf("________________________________________________________________________________________________________________\n");
		printf("Сорт 3 |Гібрид (вибір 4 - обмін)| |%10.0f   | |%10.0f | |%10.0f        |\n", (double)time_sort_3(p, m, n, 1), (double)time_sort_3(p, m, n, 2), (double)time_sort_3(p, m, n, 3));

		break;


        case 2:


        printf("    Сортувати - \n    1 - Впорядкований\n    2 - Випадковий\n    3 -  Обернено впорядкований\n");
        scanf("%d", &mode_arr);
        printf("Метод сортування\n");
        printf("1 - Прямий вибір (6)\n");
        printf("2 - Прямий обмін (6)\n");
        printf("3 - Вибір (4) - Обмін (6)\n");
        scanf("%d", &mode_sort);

        switch(mode_sort)
        {
            case 1:
            printf("Введіть розміри масиву\n");
            printf("P = \n");
            scanf("%d", &p);
            printf("M = \n");
            scanf("%d", &m);
            printf("N = \n");
            scanf("%d", &n);
            printf("Час сортування = %f", (double)time_sort_1(p, m, n, mode_arr));

            break;


            case 2:
            printf("Введыть розміри масиву\n");
            printf("P = \n");
            scanf("%d", &p);
            printf("M = \n");
            scanf("%d", &m);
            printf("N = \n");
            scanf("%d", &n);
            printf("Час сортування = %f", (double)time_sort_2(p, m, n, mode_arr));

            break;


            case 3:
            printf("Введыть розміри масиву\n");
            printf("P = \n");
            scanf("%d", &p);
            printf("M = \n");
            scanf("%d", &m);
            printf("N = \n");
            scanf("%d", &n);
            printf("Час сортування = %f", (double)time_sort_3(p, m, n, mode_arr));

            break;


            case 0:
            break;


            default:

            menu();

            break;
        }

	}



}
printf("\nМеню?\n 1 - Так\n2 - Закрити програму \n");
scanf("%d", &flag);

while(flag == 1)
{
system("cls");
menu();
printf("\n\nМеню?\n 1 - Так\n2 - Закрити програму \n");
scanf("%d", &flag);

}


}
