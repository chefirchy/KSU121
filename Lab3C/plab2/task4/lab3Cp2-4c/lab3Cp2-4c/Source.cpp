#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "���������� �����, ��������, ������������, ��������." << endl;
	cout << "���� �������� a � b . . . " << endl;
	cin >> a >> b;
	cout << (double)a + b << endl << (double)a - b << endl << (double)a * b << endl << (double)a / b << endl;
	system("pause");
	return 0;
}