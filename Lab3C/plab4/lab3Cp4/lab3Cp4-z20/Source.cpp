/*
����� �������: ������� ���������
����: 18.10.2019
20.��������� �������� ���� ����������� �����, ���� ���������� ����� ��'������.
*/

#include <iostream>
using namespace std;

int subon(unsigned int, unsigned int);

int main()
{
	cout << subon(5, 2);
	return 0;
}

int subon(unsigned int a, unsigned int b)
{
	unsigned int result = 0;
	if (a >= b)
		result = a - b;
	return result;
}