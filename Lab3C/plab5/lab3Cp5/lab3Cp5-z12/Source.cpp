/*
����� �������: ������� ���������
����: 23.10.2019
(12�� ��������)
13.	�������� � �������� �������, �� ������� ������, ���� � ��������� ������ ������� 'Y', 'y', '�', '�' � ������ � ������ �������.
Y,y,d,D
*/

#include <iostream>
using namespace std;

bool checksm(char a)
{
	if (a == 'Y' || a == 'y' || a == 'd' || a == 'D')
		return true;
	else return false;
}

int main()
{
	char a;
	cin >> a;
	if (checksm(a))
		cout << "True";
	else cout << "False";
	return 0;
}