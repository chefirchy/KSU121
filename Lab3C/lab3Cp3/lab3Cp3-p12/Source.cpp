/*
	�����: ������� ���������
    ����: 4.10.2019
	12. ������� �� ����� ������� ��� �������� ����� ���� signed long int, �������������� ��������� � �������� limits. h
*/
#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	long int input;
	cout << "���������� ���������� �������� ���������� ���� signed long int: " << LONG_MIN << endl;
	cout << "���������� ���������� �������� ���������� ���� signed long int: " << LONG_MAX << endl;
	cout << "������� ��� ����� � ��������� long int . . . "; // ���������� �� � ������ ���� ���������, ��� �������� ������� �� �����?
	cin >> input;
	system("pause");
	return 0;
}