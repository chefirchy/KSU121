/*
����� �������: ������� ���������
����: 18.10.2019
19.������ � ��������� � ������� �� ����� ���� ����� ���������� �������. � ��� �������� �� ��������� ����� ���������� ����������� ��� ������� �� ����� � ��������� ��������� ��������.
*/

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << "������� ����� �������� �������� . . ." << endl;
	char x;
	cin >> x;
	if ((unsigned int) x < 192)
	{
		MessageBox(NULL, "�����. ��������. ��������.", "������", MB_OK);
		return 0;
	}
	else
	{
		cout << x; // ����� ������
		return 0;
	}
}