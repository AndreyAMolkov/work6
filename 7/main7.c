#define _CRT_SECURE_NO_WARNINGS
#include "task7.h"
#include<stdio.h>
#include<string.h>
#define N 100
#include<time.h>
#define EXIT 1
#define IN   0
int result = IN;
 int	weight, height;

int main()
{
	int i = 0, j = 0,k=0;
	
	int x = 0, y = 0;// coordinat of first point 
	char arr[N][N];
	char *point = "x";
	char *istr;// for strstr
	FILE *fp = fopen("labirint.txt", "r");
	if (fp == NULL)
	{
		printf("Error open of file\n");
		return 1;
	}

	for (i = 0;fgets(arr[i], N, fp) != NULL;i++)
	{
		arr[i][strlen(arr[i]) - 1] = 0;
		if (x == 0)// check if 'x' and 'y' found
		{
			if ((istr = strstr(arr[i], point)) > 0)
			{
				x = istr - arr[i];
				y = i;
			}
		}
	}
	height = i - 1;// height of labirint
	weight = strlen(arr[i - 1]);//weight of labirint without '\n'

	find_exit(arr, x, y, weight, height);
	
	
	
	return 0;
}