#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int X1, Y1, X2, Y2;
	cout << "���� . . . �����������������: X1, Y1, X2, Y2 . . ." << endl;
	cin >> X1 >> Y1 >> X2 >> Y2;
	if (abs(X1 - X2) == abs(Y1 - Y2)) cout << "����� '��� ����'." << endl;
	else { cout << "����� �� '��� ����'." << endl; }
	system("pause");
	return 0;
}