/*
	����� �������: ������� ���������
	����: 11.09.2019
	2.��������� ��������, ���� ��������,: ������������� �� ���� �� �.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double X1, Y1, C1, X2, Y2, C2;
	cout << "���� . . . ������������������: X,Y,C . . ." << endl;
	cin >> X1 >> Y1 >> C1 >> X2 >> Y2 >> C2;
	//cout << X1 / X2 << Y1 / Y2 << C1 / C2 << endl;
	if (X1 / X2 == Y1 / Y2 && X1 / X2 == C1 / C2 && C1 / C2 == Y1 / Y2)  cout << "������� �����������." << endl;
	if (X1 / X2 == Y1 / Y2 && X1 / X2 != C1 / C2 && C1 / C2 != Y1 / Y2) cout << "������� �� ������������." << endl;
	else { cout << "������� ������������." << endl; }
	system("pause");
	return 0;
}
