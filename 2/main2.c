﻿#include<stdio.h>
#include "task2.h"

int main()
{
	unsigned int maxlen= 0;
	unsigned int number=0;
	number=seqCollatz(&maxlen);
	printf("number= %u  maxlen= %u\n", number, maxlen);

	return 0;
}
/*Написать программу, которая находит в диапазоне целых чисел от
2 до 1000000 число, формирующее самую длинную последовательность Коллатца
Пояснение

Последовательностью Коллатца называют числовой ряд, каждый элемент которого формируется в зависимости от чётности/ нечётности 
предыдущего по закону:

n→3n+1, если n нечётное.
n→n/2, если n чётное
Начав отсчет с любого числа у нас формируется последовательность Коллатца, например:

1
2,1
3,10,5,16,8,4,2,1
4,2,1
5,..
Генерация членов последовательности заканчивается, когда появляется единица. Количество элементов и составляет длину последовательности. 
В задаче надо перебирать в цикле числа от 2 до миллиона и для каждого считать длину последовательности. В конце необходимо вывести число,
формирующего самую длинную последовательность и длину этой последовательности.
- unsigned int seqCollatz(unsigned int *maxlen) - функция, возвращающая число и записывающую по адресу maxlen длину
- unsigned int collatz(unsigned long long num) - функция, возвращающая длину последовательности Коллатца для числа num
- main() - организация ввода строки*/