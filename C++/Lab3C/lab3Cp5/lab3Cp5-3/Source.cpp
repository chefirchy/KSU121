/*
����� �������: ������� ���������
����: 23.10.2019
3.	�������� ��������, ��� ������ � ����������� �������� ���������� ���� �����
( x 1 , y 1 ) � ( x 2 , y 2 ) � �������� �, ��� �������� � ����� ������� �� ����
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	int x1, y1, x2, y2;
	cout << "������� ���������� � ������ �������: X1, Y1, X2, Y2 . . ." << endl;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << "���������� = " << sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) << endl;
	system("pause");
	return 0;
}