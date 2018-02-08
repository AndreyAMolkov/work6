#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 512

int main()
{
	char arr[SIZE];
	unsigned int value=0;
	printf("Input the any long number without space:\n");
	scanf("%u", &value);
	fflush(stdin);
	int2str(arr, value);
	printf( "%s\n",arr);
	return 0;
}

