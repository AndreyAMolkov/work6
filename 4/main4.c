#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef long long ll;
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define DELAY 50000
#include "task4.h"

int main()
{
	int j = 0;
	ll i = 0,rec = 0, usul = 0,N=0;
	int M=0;
	time_t start, end;
	double seconds_usul = 0.0, seconds_rec = 0.0;
	printf("Enter random stepen: ");
	scanf("%i", &M);
	N = pow(2, M);
	char *p = (char*)malloc(N * sizeof(char));
	while (p == NULL)
	{
		printf("Error. Enter less number:");
		scanf("%i", &M);
		N = pow(2, M);
		char *p =(char*) malloc(N * sizeof(char));
	}

	for (i=0;i<N;i++)
		p[i]= rand() % 10+'0';
	p[N] = 0;
		
	time(&start);
		for (j = 0;j<DELAY;j++)// castom delay for reserch timing
			rec = sumR(p, N);
	time(&end);
		seconds_rec = difftime(end, start);
		printf("The time rekursii: %00.f seconds\n", seconds_rec);
	time(&start);
		for (j = 0;j<DELAY;j++)// castom delay for reserch timing
			usul =sumC(p,N);// -суммирование массива циклом
	time(&end);
		seconds_usul = difftime(end, start);
		printf("The time usually: %00.f seconds\n", seconds_usul);
		printf("check diferent between methods = %lli\n", rec- usul);
		double difernt = (seconds_rec / seconds_usul) * 100;
		printf("diferent between methods = %0.f%%\n", difernt);
		free(p);
	return 0;
}
/*Ќаписать программу, котора€ суммирует массив традиционным (циклическим) и рекурсивным способами
ѕо€снение

ѕрограмма выполн€ет следующую последовательность действий:

принимает из командной строки значение степени двойки M;
находит размер динамического массива N = 2^M ;
выдел€ет пам€ть под динамический массив;
случайным образом заполн€ет массив данными;
находит сумму традиционным и рекурсивыным способом;
сравнивает врем€ выполнени€ суммировани€ традиционным (циклическим) и рекурсивным способами;
освобождает динамическую пам€ть
—остав

ѕрограмма должна включать в себ€ функции (и, возможно, другие):

- long long sumC(char *arr,int len) - суммирование массива циклом
- long long sumR(char *arr,int len) - суммирование массива рекурсией
- main() */