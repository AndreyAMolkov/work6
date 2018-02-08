#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef unsigned long long int ull;
#include<stdlib.h>
#include<time.h>
#include "task6.h"

int main()
{
	int N = 0, i = 0, j = 0;
	ull result = 0;
	double seconds, seconds_t;
	time_t start, end, start_total, end_total;
	
	FILE *fp;
	if ((fp = fopen("result.xls", "w")) == NULL)
	{
		printf("Error of open a file\n");
		return 1;
	}

	printf("Enter number of fibonachi= \n");
	scanf("%i", &N);
	
	time(&start_total);
	fprintf(fp, "Number \t Result  \t Time\n");
	for (i = 1;i <= N;i++)
	{
		result = fib2(i);
		time(&end);
		seconds = difftime(end, start_total);
		printf("%i  \t%llu \t total time =%.0f\n", i, result, seconds);
		fprintf(fp, "%i  \t%llu \t %.0f\n", i, result, seconds);
	}
	time(&end_total);
	seconds_t = difftime(end_total, start_total);
	printf("\n total time =%.0f sec.\n", seconds_t);
	fclose(fp);
	return 0;
}
/*6. Написать реализацию рекурсивной функции, вычисляющую n-ыйэлемент ряда Фибоначчи, но без экспоненциально 
растущей рекурсии
Замечание:
Нужно создать две функции: одна вызывается непосредственно из main и вы-
зывает вторую, вспомогательную, которая и является рекурсивной.*/