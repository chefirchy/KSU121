/*
����� �������: ������� ���������
����: 17.10.2019
4.��������� ����������� � ������� �� ����������� � ������� �� ������
(������� ��� ���������: � = 5/9 (�-32)).
*/

#include <iostream>
using namespace std;

float FtoC(float F);

int main()
{
	cout << FtoC(451) << endl;
	system("pause");
	return 0;
}
float FtoC(float F)
{
	return (F - 32) * 5 / 9;
}