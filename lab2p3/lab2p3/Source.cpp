#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, C, D;
	cout << "� ��� �, � ��� �, � ��� �." << endl;
	cin >> a >> b >> C;
	D = a;
	a = b;
	cout << "A = " << b << endl;
	b = C;
	cout << "B = " << C << endl;
	a = D; // ������ �����������?
	C = a;
	cout << "C = " << a << endl;
	system("pause");
	return 0;
}