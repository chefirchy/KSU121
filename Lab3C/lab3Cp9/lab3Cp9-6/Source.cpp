/*
����� �������: ������� ���������
����: 03.12.2019
6. ������ � ��������� �� ��������� ������� scanf () ��� ����� ( ���� � ������� ) 
� ����������� �� �� ����� �� ��������� ������� printf (), ���� ������ ����� ���� ������ ���������.
*/

#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 0; float b = 0;
	printf("������� ����� � ������������ ����� (����� ������) . . .\n");
	if(scanf_s("%i %f", &a, &b) == 2)
	{
		printf_s("%i � %f", a, b);
	}
	else
	{
		cout << "������� ������������ ������!" << endl;
	}
	return 0;
}