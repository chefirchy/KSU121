/*
����� �������: ������� ���������
����: 18.10.2019
18.������ � ��������� ���� ����� �� 1 �� 100. � ��� �������� ������������� �������� ���������� ����������� ��� ������� �� ����� � ��������� ��������� ��������.
*/

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int x;
	cout << "������� ����� � ��������� �� 1 �� 100 . . ." << endl;
	cin >> x;
	if (x < 1 || x > 100)
	{
		MessageBox(NULL, "��� ���������.", "������", MB_OK);
		return 0;
	}
	else return 0;
}

//