/*
	����� �������: ������� ���������
	����: 22.09.2019
	1.������� ��������, ���� �� ��������, ������� � ������� ������ ��������� ����� � �ᒺ� ���� ������.
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x, y, z;
	cout << "��������, ������� ������� ������� � ����� ������� �� ��� ����������." << endl;
	cin >> x >> y >> z;
	double S = x*y;
	double V = S*z;
	cout << "������� " << S << endl << "����� " << V << endl;
	system("pause");
	return 0;
}