/*
����� �������: ������� ���������
����: 17.10.2019
3.��������� �������, ������� � ��., � ���. (1 ���� = 1609 �.)
*/

#include <iostream>
using namespace std;

float kmToM(float km);

int main()
{
	cout << kmToM(1.6) << endl;
	system("pause");
	return 0;
}
float kmToM(float km)
{
	return km * 1. / 1.609;
}