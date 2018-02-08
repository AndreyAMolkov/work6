#include<stdio.h>
#include "task7.h"
#include<time.h>
//#define N 100
#define EXIT 1
extern int result;
extern int weight, height;
void place(int x, int y)
{

}
void print_path(char(*arr)[N], int height)
{
	int i = 0;
	for (i = 0;i <= height;i++)
	{
		//for (j = 0;j < x;j++)
		puts(arr[i]);
	}
}
int find_exit(char(*arr)[N], int x, int y, int weight, int height)
{
	clock_t now;
	int wall = 0;
	if (arr[y][x] == ' ')
	{
		arr[y][x] = '*';
		now = clock();
		//while (clock()<(now+CLOCKS_PER_SEC));// if need delay for demonstration
		print_path(arr, height);
		puts("\n");
		arr[y][x] = '.';
	}
	if ((x <= weight && y == 0) || (x == 0 && y <= height) || (x == weight && y >= 0 && y < height)
		|| (x <= weight && x >= 0 && y == height))
	{
		result = EXIT;
		return 0;
	}
	else
	{

		if (result == EXIT)	return 0;//for exit and draw path
		if (arr[y - 1][x] == ' ') find_exit(arr, x, y - 1, weight, height);//
		if (result == EXIT)	return 0;//for exit and draw path
		if (arr[y][x + 1] == ' ')  find_exit(arr, x + 1, y, weight, height);
	  	if (result == EXIT)	return 0;//for exit and draw path
		if (arr[y + 1][x] == ' ') find_exit(arr, x, y + 1, weight, height);
		if (result == EXIT)	return 0;//for exit and draw path
		if (arr[y][x - 1] == ' ') find_exit(arr, x - 1, y, weight, height);
		if (result == EXIT) return 0;
		else return 0;//for exit and draw path

	}
	
}