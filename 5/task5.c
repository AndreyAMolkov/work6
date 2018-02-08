#include "task5.h"
#include<stdio.h>
unsigned long long fib1(int N)//нахождение N-ого члена ряда Фибоначчи с помощью рекурсии
{
		if (N <= 2)
			return 1;
		else
			return fib1(N - 1) + fib1(N - 2);
	
}