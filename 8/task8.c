#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include "task8.h"

#define IN 1
#define OUT 0
int flag = OUT;
void cleangap(char *p)
{
	int i = 0;
	int j = 0;
	while (*p == ' ' || (isnumb(p)) | *p == '(')
		--p;
	++p;
	for (i = 0;p[i] != '\0';i++)
	{
		j = 0;
		if (p[i] == ' ')
			for (j = i--;p[j] != 0;j++)

				p[j] = p[j + 1];

	}
}
char *int2str(char *buf, unsigned int value)// recursia
{
	static	int i = -1;// need for from next step i=0
	i++;
	if ((value) == 0)
	{
		i = 0;
		return buf;
	}
	else
		int2str(buf, (value / 10));
	buf[i++] = value % 10 + '0';
	return buf;

}

void inttochar(char *in,unsigned int value)// help from int to char*
{
	while (*in != ' ');
				int2str(in, value);			
}
int isnumb(char *arr)
{
	//for (;*arr != ' ';arr++)
		if (*arr >= '0' && *arr <= '9')
			return 1;
		else
			return 0;

}
int makeexpr(char op, char *expr1, char *expr2)
{
	int rezult = 0;
	switch (op)
	{
	case('+'):
		rezult=(atoi(expr1) + atoi(expr2));
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
	/**expr1 = '0';
	*expr2 = '0';
	op = '0';*/
	flag = OUT;
	return rezult;
}
char partition(char *buf, char *expr1, char *expr2)
{
	char op = '0';
	if (*expr1 == '0')
		{
							if (*buf == '\0')
								return -111;
		if (isnumb(buf))// if  number then will be '1' else '0'
		{
			expr1 = buf;
			*buf = ' ';
		}
		else
			partition(++buf, expr1, expr2);
		}
	if (*expr2 == '0')
	{
							if (*buf == '\0')
								return -112;
		if (isnumb(buf))// if  number then will be '1' else '0'
		{	
		expr2 = buf;
		*buf = ' ';
		}
		else
			partition(++buf, expr1, expr2);
	}
		while (*--buf == ' ');
		op = *buf;
		*buf = ' ';
		return op;

}
int eval(char *buf)// -функци€, вычисл€юща€ строку, содержащуюс€ в buf
{
	char a[10] = { "0" };
	char b[10] = { "0" };
	char *expr1 = a;
	char *expr2 = b;
	char op = '0';
	static int  count = 0;
	count++;
	if (*buf == '\0')
		return atoi(buf);

	if (*buf == ')'&& flag == OUT)
	{
		*buf = ' ';
		flag = IN;
		//buf - 3;// for find'('
		return buf;
	}
	else
		eval(++buf);

	if (*buf == '('&& flag == IN)
	{
		*buf = ' ';
		op = partition(++buf, expr1, expr2);
		inttochar(buf, makeexpr(op, expr1, expr2));// int to buf for next loop
		cleangap(buf);
		return 0;
	eval(++buf);
	}
	//if (count == 1) eval(buf--);
	count--;


	

}
