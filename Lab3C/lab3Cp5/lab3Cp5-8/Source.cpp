/*
����� �������: ������� ���������
����: 23.10.2019
8.	�������� �������� ������� � ��'�� Perimeter (), ��� ������� ���������� ����� ���� � ������ ��� ��������� ���� int.
9.	�������� ���������� ������� Perimeter (), ��� �������� �������� ������������.
*/

#include <iostream>
using namespace std;

unsigned long int Perimeter(int a, int b);

int main()
{
	int a; int b;
	cin >> a >> b;
	cout << Perimeter(a,b);
	return 0;
}

unsigned long int Perimeter(int a, int b)
{
	return 2 * (a + b);
}