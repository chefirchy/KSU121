/*
����� �������: ������� ���������
����: 01.12.2019
8.������� ��'��� ������ ���� � �����. ���� �������� �� �����. ����� � ����������� �������� ����� ��'���� �� ��������� ���������.
*/

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	system("color 02");
	int num = 1;
	int* pNum = &num;
	*pNum = 2;
	cout << "*pNum = " << *pNum << " , num = " << num << endl;
	return 0;
}