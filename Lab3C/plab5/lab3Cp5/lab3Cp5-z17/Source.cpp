/*
����� �������: ������� ���������
����: 23.10.2019
17.	�������� ������� ��� ��������� ���� �����, �� �� ���� �������� �� �������������.
*/

#include <iostream>
using namespace std;

int summ(int b)
{
	int a = 2;
	return a + b;
}
int main()
{
	int b;
	cin >> b;
	cout << summ(b);
	return 0;
}