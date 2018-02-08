#include "task6.h"
typedef unsigned long long ull;

unsigned long long speed_fibon(ull i, ull j, int N)
{
	if (N <2)
		return j;
	else
		return speed_fibon(j, j + i, N - 1);
}

unsigned long long fib2(int N)
{

		return speed_fibon(0, 1, N);
}