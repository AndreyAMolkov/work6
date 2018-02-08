#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include "task4.h"
long long int sumC(char *arr, int len)// -суммирование массива циклом
{
		long long summ = 0;
		for (len = len - 1;len >= 0;len--)
			summ += arr[len] - '0';
		return summ;
}
long long int sumR(char *arr, int len)// -суммирование массива рекурсией
{
	
		if (len == 1)
			return	*arr - '0';
		else
			return	sumR((arr + 1), len - 1) + *arr - '0';
	
}