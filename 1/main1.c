#include<stdio.h>
//#define N 66
#include "task1.h"
//#define M 94
int main()
{
	int x=N/2, y=M/2, size = 4,i=0,j=0;
    char arr[N][M];
	memset(arr, ' ', sizeof(arr));

drawFractal(arr, x, y, size);
for (i = 0;i < N;i++)
{
	for (j = 0;j < M;j++)
	{
		printf("%c",arr[i][j]);
	}
	printf("%c\n",0 );
	
}

	return 0;
}