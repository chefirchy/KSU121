/*
����� �������: ������� ���������
����: 26.11.2019
1.�� ������� ��� ����������? a ) int * pOne ; b ) int vTwo ; c ) int * pTree = & vTwo ;
2.���� � ��� � ����� ���� unsigned short int � ��'�� yourAge, �� ��������� ��������, ��� ���� �� �� ������.
3.������� �������� 50 ����� yourAge � �.2.
*/

// int * pOne -> ���������� ���������
// int vTwo -> ���������� ����������
// int * pTree = &vTwo -> ��������� ��������� �� ���������� vTwo

#include <iostream>
#include <windows.h>
using namespace std;
typedef unsigned short USINT;

int main()
{
	system("color 02");
	USINT yourAge = 50;
	USINT* p = &yourAge;
	cout << "(Value: " << *p << ")" << endl;
	cout << "Adress: " << p << endl;
	return 0;
}