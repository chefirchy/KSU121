#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	a = 2, b = 3;
	cout << "���������� �����, ��������, ������������, ��������." << endl;
	cout << (double)a + b << endl << (double)a - b << endl << (double)a * b << endl << (double)a / b << endl;
	system("pause");
	return 0;
}