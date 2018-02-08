#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef unsigned long long int ull;
#include<stdlib.h>
#include<time.h>
#include "task5.h"



int main()
{
	int N = 0,i=0,j=0;
	ull result = 0;
	double seconds, seconds_t;
	time_t end,start_total, end_total;
	FILE *fp;
	if ((fp = fopen("result.xls", "w"))== NULL)
	{
		printf("Error of open a file\n");
			return 1;
	}

	printf("Enter number of fibonachi= \n");
	scanf("%i", &N);
	time(&start_total);
	fprintf(fp, "Number  \t Time \t Result \n");
		for (i = 1;i <= N;i++)
			{
					result = fib1(i);
					time(&end);
					seconds = difftime(end, start_total);
					printf("%i  \t%llu \t total time =%.0f\n", i, result, seconds);
					fprintf(fp, "%i  \t %.0f \t %llu\n", i, seconds, result);
			}
				time(&end_total);
				seconds_t = difftime(end_total, start_total);
			printf("\n total time =%.0f sec.\n",seconds_t);
			fclose(fp);

	return 0;
}
/*Написать программу, которая измеряет время вычисления N-ого члена ряда Фибоначчи. Предусмотреть вывод таблицы значений
для N в диапазоне от 1 до 40 (или в другом диапазоне по желанию)на экран и в файл
Замечание:
Текстовый файл со значениями можно открыть в электронной таблице и построить график зависимости времени от члена ряда N
*/