/*
	����� �������: ������� ���������
	����: 30.09.2019
	5.�������� �������� ������� ��� ��������� ��������� ��� ������ ��������, ����� �������������, ��� ����'����� � ��. �������� �� ���������. �������� �� � ������� �������.
*/
#include <iostream>
using namespace std;
void PrintInfo();
int main()
{
	setlocale(LC_ALL, "Russian");
	PrintInfo();
	system("pause");
	return 0;
}
void PrintInfo()
{
	cout <<"�����: ������� ��������� "<< endl;
	cout <<"���� ���������������: C++ "<< endl;
	cout <<"��� ��: ������� "<< endl;
	cout <<"��: Win 10 Pro (x64) "<< endl;
}