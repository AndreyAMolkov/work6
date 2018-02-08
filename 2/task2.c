#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "task2.h"
//typedef unsigned long long ull;
unsigned int seqCollatz(unsigned int *maxlen)// -function return the number and record lenght in adress maxlen
{
	unsigned int len=0;
	unsigned int nummax = 0, num=0;
	for (num=2;num<=1000000;num++)
	{
		if (nummax < (len = collatz(num)))
		{
			*maxlen = len;
			nummax = num;
		}
	}
	
	return nummax;// 
}


unsigned int collatz(ull num)// -the function retutn  lenght of numbers of collatz
{
	static unsigned int count = 0;
	count++;
	if(num == 1)
		return count;
	else if (num % 2 == 0)
			collatz(num / 2);
			else
			collatz(3 * num + 1);

	
	count=0;
	
}

/*
Написать программу, которая находит в диапазоне целых чисел от2 до 1000000 число, 
формирующее самую длинную последовательность Коллатца
Пояснение

Последовательностью Коллатца называют числовой ряд, каждый элемент которого формируется в зависимости 
от чётности/ нечётности предыдущего позакону:

n→3n+1, если n нечётное.
n→n/2, если n чётное
Начав отсчет с любого числа у нас формируется последовательность Коллатца, например:

1
2,1
3,10,5,16,8,4,1
4,2,1
5,..
Генерация членов последовательности заканчивается, когда появляется единица. Количество элементов и составляет длину 
последовательности. В задаче надо перебирать в цикле числа от 2 до миллиона и для каждого считать длину 
последовательности. В конце необходимо вывести число, формирующего самую длинную последовательность и 
длину этой последовательности.

Состав
Программа должна состоять из функций
    - unsigned int seqCollatz(unsigned int *maxlen) - функция, возвращающая число и записывающую по адресу len длину 
    - unsigned int collatz(unsigned long long num) - функция, возвращающая длину последовательности Коллатца 
	для числа num
    - main() - организация ввода строки
	Создаются три файла: task2.h,task2.c,main2.c.*/