#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 512
#include "task8.h"

int main()
{
	//char buf[SIZE];
	
	char p[] = "(3*3)";
	char *buf = (char*)malloc(strlen(p) * sizeof(char));
	strcpy(buf, p);
	while (strlen(buf) > 2)
	{
		printf("%i", eval(buf));
		
	}
	
	printf("%i", eval(buf));
	

	return 0;
}
/*
�������� ���������, ������� ��������� ������������� ��������� ��������������� ���������, ��������� � ���� ��������� ������-
��� ������. ������������� ��������� 4-� �������� ��������. ������� ���������� ������������ �������� ��������
���������:
� ������ ��������� ����� ����������� �������: 0-9,+,-,*,/,(,) ��������� ����� ���� ��������, �� ���� ������� ��������
�� ������ ����� 3, 8, � ����� ���� ��������, ��������, ((6+8)*3) ��� (((7-1)/(4+2))-9). ��������������, ��� ������ � 
��������� ������ ���������, �� ���� ���������� �������� ����� ���������� �������� � ��� �� ���������� ��������.
��������� ������ �������� �� ��������� �������:
(a) int main(int argc, char* argv[]) - ������� �������, � ������� �������������� ����� ����������� ������� eval ��� ���������� ���������
(b) int eval(char *buf) - �������, ����������� ������, ������������ � buf
(c) char partition(char *buf, char *expr1, char *expr2) - �������, ������� ��������� ������, ������������ � buf �� ��� �����: 
������ � ������ ���������, ���� �������� � ������ �� ������ ���������
*/