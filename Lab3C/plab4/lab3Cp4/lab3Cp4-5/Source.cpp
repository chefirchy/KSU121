/*
����� �������: ������� ���������
����: 17.10.2019
5.�������� ���� ��'����, ������ � ������, � �������� � ����� (1 �. = 0.453592 ��.).
*/

#include <iostream>
using namespace std;

float PtoKG(float p);
float PtoG(float p);

int main()
{
	cout << PtoKG(27) << endl;
	cout << PtoG(27) << endl;
	system("pause");
	return 0;
}
float PtoKG(float p)
{
	return p * 0.453592;
}
float PtoG(float p)
{
	return PtoKG(p) * 1000;
}