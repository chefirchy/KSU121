/*
����� �������: ������� ���������
����: 23.10.2019
5.	������ � ��������� ����� � ����� �������� - ����� �-�����. ���������� ����� � ����, ����� ���� � �����. ������� �� ����� �� �����.
*/

#include <iostream>
using namespace std;

int main()
{
	char line[100];
	cin >> line;
	cout << "char to int = " << atoi(line) << "\t" << "char to long = " << atol(line) << "\t" << "char to float = " << atof(line);
	return 0;
}