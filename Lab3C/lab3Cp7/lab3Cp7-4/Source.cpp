/*
����� �������: ������� ���������
����: 05.11.2019
4. �������� �������� ��� �������� ����� �� �������� �������� � ���������. � ��� ������ �� ������ �������� �������� �������� �����.
*/
#include <iostream>
using namespace std;

int main()
{
	int reach;
	do
	{
		cout << "Enter any number between 0 and 65535 . . ." << endl;
		cin >> reach;
	} while (reach > 0 && reach < 65535);
	system("pause");
	return 0;
}