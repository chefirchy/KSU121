#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, C;
	cout << "� ��� �, � � ��� �." << endl;
	cin >> a >> b;
	C = a;
	a = b;
	cout << "A = " << b << endl;
	b = C;
	cout << "B = " << C << endl;
	system("pause");
	return 0;
}