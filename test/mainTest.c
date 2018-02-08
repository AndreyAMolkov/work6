#include<stdio.h>
#define OUT 0
int flag=1;
/*int main2(int argc, char *argv[])
{
	while (--argc > -1)
		printf("%s  =argc =%i\n", argv[argc],argc);
	printf("\n");
	
	return 0;
}*/
int makeexpr(char op, char *expr1, char *expr2)
{
	int rezult = 0;
	switch (op)
	{
	case('+'):
		rezult = (atoi(expr1) + atoi(expr2));
		break;
	case('-'):
		rezult = (atoi(expr1) - atoi(expr2));
		break;
	case('*'):
		rezult = (atoi(expr1)  *  atoi(expr2));
		break;
	case('/'):
		rezult = (atoi(expr1) / atoi(expr2));
		break;
	}
	*expr1 = '0';
	*expr2 = '0';
	op = '0';
	flag = OUT;
	return rezult;
}
int main()
{
	//char buf[SIZE];

	char *expr1 = "3";
	char *expr2 = "3";
	makeexpr('*', expr1, expr2);
	 return 0;
	}