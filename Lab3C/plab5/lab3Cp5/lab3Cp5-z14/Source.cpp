/*
����� �������: ������� ���������
����: 23.10.2019
14.	�������� � �������� inline - �������, ��� ������� ������� �������� ���������� �� �������.
*/

#include <iostream>
using namespace std;

inline int chtoi(char a)
{
	return (int)a;
}

int main()
{
	char a;
	cin >> a;
	cout << chtoi(a) << endl;
	return 0;
}