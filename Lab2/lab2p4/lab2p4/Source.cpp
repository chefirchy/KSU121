/*
	����� �������: ������� ���������
	����: 22.09.2019
	4.������� ��������, ���� �������� ������� ����� ����� an (a�� ����� �����, n � ���������� �����).
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, n, X;
	cout << "��������, ������������ ��������� ����� ����� a^n" << endl;
	cin >> a >> n;
	X = pow(a, n);
	cout << "��������� = " << X % 10 << endl;
	system("pause");
	return 0;
}